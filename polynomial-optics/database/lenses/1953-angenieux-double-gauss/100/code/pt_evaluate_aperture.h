case angenieux_double_gauss_1953_100mm:
{
out[0] =  + 53.368 *dx + 0.154173 *x + 13.3439 *dx*lambda + 0.26366 *x*lambda + -9.18561 *dx*lens_ipow(lambda, 2) + -33.2685 *dx*lens_ipow(dy, 2) + -33.5163 *lens_ipow(dx, 3) + -0.022706 *y*dx*dy + -0.180979 *x*lens_ipow(lambda, 2) + -0.173349 *x*lens_ipow(dy, 2) + -0.19424 *x*lens_ipow(dx, 2) + -0.000101075 *x*lens_ipow(y, 2) + -9.81721e-05 *lens_ipow(x, 3) + 0.00133304 *lens_ipow(y, 2)*dx*lambda + 0.00195819 *lens_ipow(x, 2)*dx*lambda + 14.3695 *dx*lens_ipow(dy, 4) + 29.4852 *lens_ipow(dx, 3)*lens_ipow(dy, 2) + 15.7155 *lens_ipow(dx, 5) + 0.00433777 *lens_ipow(y, 2)*dx*lens_ipow(dy, 2) + 0.266565 *x*lens_ipow(dy, 4) + 0.471407 *x*lens_ipow(dx, 2)*lens_ipow(dy, 2) + 0.27174 *x*lens_ipow(dx, 4) + 0.0125253 *x*y*lens_ipow(dx, 2)*dy + -0.000129187 *lens_ipow(x, 2)*y*dx*dy + -9.4332e-05 *lens_ipow(x, 3)*lens_ipow(dx, 2) + -0.011584 *lens_ipow(x, 2)*dx*lens_ipow(dy, 2)*lambda + -0.0105079 *lens_ipow(y, 2)*lens_ipow(dx, 3)*lens_ipow(lambda, 2) + -6.35762e-13 *lens_ipow(x, 5)*lens_ipow(y, 4);
out[1] =  + 53.3126 *dy + 0.15413 *y + 13.6022 *dy*lambda + 0.263764 *y*lambda + -9.40104 *dy*lens_ipow(lambda, 2) + -33.8532 *lens_ipow(dy, 3) + -33.3318 *lens_ipow(dx, 2)*dy + -0.181196 *y*lens_ipow(lambda, 2) + -0.193336 *y*lens_ipow(dy, 2) + -0.17203 *y*lens_ipow(dx, 2) + -9.83005e-05 *lens_ipow(y, 3) + -0.0225367 *x*dx*dy + 0.000554925 *lens_ipow(x, 2)*dy + -0.000101 *lens_ipow(x, 2)*y + 0.00195325 *lens_ipow(y, 2)*dy*lambda + 16.8773 *lens_ipow(dy, 5) + 29.9523 *lens_ipow(dx, 2)*lens_ipow(dy, 3) + 14.5414 *lens_ipow(dx, 4)*dy + 0.267088 *y*lens_ipow(dy, 4) + 0.468686 *y*lens_ipow(dx, 2)*lens_ipow(dy, 2) + 0.260471 *y*lens_ipow(dx, 4) + -9.30644e-05 *lens_ipow(y, 3)*lens_ipow(dy, 2) + 0.0126359 *x*y*dx*lens_ipow(dy, 2) + 0.00449158 *lens_ipow(x, 2)*lens_ipow(dx, 2)*dy + -0.0119848 *lens_ipow(y, 2)*lens_ipow(dx, 2)*dy*lambda + -0.000235998 *x*lens_ipow(y, 2)*dx*dy*lambda + -0.0213871 *lens_ipow(x, 2)*lens_ipow(dy, 5)*lambda + -6.24227e-13 *lens_ipow(x, 4)*lens_ipow(y, 5);
out[2] =  + 0.400517 *dx + -0.017775 *x + 0.00661073 *x*lambda + -0.513191 *dx*lens_ipow(dy, 2) + -0.534155 *lens_ipow(dx, 3) + -0.00986115 *y*dx*dy + -4.1723e-06 *lens_ipow(y, 2)*dx + -0.00460932 *x*lens_ipow(lambda, 2) + -0.00566489 *x*lens_ipow(dy, 2) + -0.0144193 *x*lens_ipow(dx, 2) + 5.96917e-05 *x*y*dy + -2.84578e-06 *x*lens_ipow(y, 2) + 5.73835e-05 *lens_ipow(x, 2)*dx + -2.77618e-06 *lens_ipow(x, 3) + 0.136714 *lens_ipow(dx, 5) + 0.00407283 *x*lens_ipow(dy, 4) + -5.65199e-09 *lens_ipow(x, 3)*lens_ipow(y, 2) + 0.460018 *lens_ipow(dx, 3)*lens_ipow(dy, 2)*lambda + 7.66937e-09 *lens_ipow(x, 3)*lens_ipow(y, 2)*lambda + 0.00137659 *x*y*lens_ipow(dx, 4)*dy + -1.51957e-08 *x*lens_ipow(y, 4)*lens_ipow(dx, 2) + 4.07559e-10 *lens_ipow(x, 3)*lens_ipow(y, 3)*dy + 4.66977e-10 *lens_ipow(x, 4)*lens_ipow(y, 2)*dx + -5.0735e-09 *lens_ipow(x, 5)*lens_ipow(dy, 2) + -1.69806e-08 *lens_ipow(x, 5)*lens_ipow(dx, 2) + -0.0246534 *x*lens_ipow(dx, 6)*lambda + -0.119174 *y*dx*lens_ipow(dy, 7) + -0.00033189 *lens_ipow(y, 3)*lens_ipow(dx, 3)*lens_ipow(dy, 3);
out[3] =  + 0.39996 *dy + -0.0177837 *y + 0.00659246 *y*lambda + -0.534638 *lens_ipow(dy, 3) + -0.511315 *lens_ipow(dx, 2)*dy + -0.00459732 *y*lens_ipow(lambda, 2) + -0.0142295 *y*lens_ipow(dy, 2) + -0.00556114 *y*lens_ipow(dx, 2) + 6.18206e-05 *lens_ipow(y, 2)*dy + -2.74258e-06 *lens_ipow(y, 3) + -0.00985212 *x*dx*dy + 5.95957e-05 *x*y*dx + -2.7188e-06 *lens_ipow(x, 2)*y + 0.141089 *lens_ipow(dy, 5) + 0.00390896 *y*lens_ipow(dx, 4) + -4.08383e-06 *lens_ipow(x, 2)*y*lens_ipow(dy, 2) + -6.09963e-09 *lens_ipow(x, 2)*lens_ipow(y, 3) + 0.464899 *lens_ipow(dx, 2)*lens_ipow(dy, 3)*lambda + 7.95309e-09 *lens_ipow(x, 2)*lens_ipow(y, 3)*lambda + -1.8148e-08 *lens_ipow(y, 5)*lens_ipow(dy, 2) + -5.40831e-09 *lens_ipow(y, 5)*lens_ipow(dx, 2) + 0.00151584 *x*y*dx*lens_ipow(dy, 4) + 3.66968e-10 *lens_ipow(x, 3)*lens_ipow(y, 3)*dx + -0.0247426 *y*lens_ipow(dy, 6)*lambda + -0.117182 *x*lens_ipow(dx, 7)*dy + -0.00030277 *lens_ipow(x, 3)*lens_ipow(dx, 3)*lens_ipow(dy, 3) + 1.44063e-12 *lens_ipow(x, 4)*lens_ipow(y, 4)*dy + -2.109e-11 *lens_ipow(x, 6)*y*lens_ipow(dx, 2);
out_transmittance =  + 0.445539  + 1.17147 *lambda + -2.4237 *lens_ipow(lambda, 2) + 2.36156 *lens_ipow(lambda, 3) + -0.0131189 *lens_ipow(dx, 2)*lambda + -0.891725 *lens_ipow(lambda, 4) + -0.17551 *lens_ipow(dy, 4) + -0.396996 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + -3.66413e-09 *lens_ipow(y, 4) + -8.64953e-09 *lens_ipow(x, 2)*lens_ipow(y, 2) + -0.0641842 *lens_ipow(dy, 4)*lambda + -2.06948 *lens_ipow(dx, 6) + 0.0202545 *y*lens_ipow(dx, 2)*lens_ipow(dy, 3) + -0.000165465 *lens_ipow(y, 2)*lens_ipow(dx, 2)*lens_ipow(dy, 2) + 2.66708e-06 *lens_ipow(y, 3)*lens_ipow(dy, 3) + 0.0236877 *x*lens_ipow(dx, 3)*lens_ipow(dy, 2) + -7.76474e-08 *lens_ipow(x, 3)*y*dx*dy + -3.76312e-08 *lens_ipow(x, 4)*lens_ipow(dy, 2) + -8.2633e-08 *lens_ipow(x, 4)*lens_ipow(dx, 2) + 8.09786 *lens_ipow(dx, 8) + 0.0287035 *y*lens_ipow(dy, 7) + 0.0370859 *y*lens_ipow(dx, 6)*dy + 0.0355674 *x*dx*lens_ipow(dy, 6) + 0.030737 *x*lens_ipow(dx, 7) + 1.42861e-05 *x*lens_ipow(y, 2)*lens_ipow(dx, 5) + 1.0393e-05 *lens_ipow(x, 2)*y*lens_ipow(dy, 5) + -5.09739 *lens_ipow(dx, 4)*lens_ipow(dy, 4)*lens_ipow(lambda, 2) + -10.8817 *lens_ipow(dx, 10);
} break;
