#include "CImg.h"
#include <stdio.h>

using namespace cimg_library;

int main() {

	/*CImg<float> resim("lena.bmp");*/
	const CImg<unsigned char> img = CImg<float>("lena.bmp").RGBtoYCbCr().channel(0).resize(256, 256);
	CImgList<float> F = img.get_FFT();
	CImg<float> angle = F[1].get_atan2(F[0]); //  arctan(sanal(f)/gercel(f)) -> -pi + pi arasýnda atan2 kullanýlýr. acýyý bulmak için
	CImgList<float> angleF(F);
	angleF[0].fill(0);
	angleF[1].fill(0);
	angleF[0] = angle.get_cos();
	angleF[1] = angle.get_sin();


	//kaydýrma iþlemi çünkü dusuk frekanslar kenarda kalýyor biz ortaya alýyporuz
	cimglist_apply(F, shift)(img.width() / 2, img.height() / 2, 0, 0, 2);

	//foruer donusumunu saglýyor
	const CImg<unsigned char>mag = ((F[0].get_pow(2) + F[1].get_pow(2)).sqrt() + 1).log().normalize(0, 255);
	CImgList <unsigned char>visu(img, mag);
	CImgDisplay disp(visu, "[#16]-fourier filtering");



	//resim.quantize(256);

	//resim = (resim / 255).pow(2.0) *= 255;
	/*resim.blur(4);
	CImgDisplay main_disp(resim, "Click a point");*/


	system("pause");
}