case schneider_anamorphic_2001_31mm:
{
const float dx00 =  + -1.24942  + 1.92711 *lens_ipow(dx, 2)*lambda + 0.19319 *x*dx*lambda + 0.00301204 *lens_ipow(x, 2)*lambda + -12.7656 *lens_ipow(dx, 4) + -2.31553 *x*lens_ipow(dx, 3) + -0.000544703 *x*lens_ipow(y, 2)*dx + -0.13413 *lens_ipow(x, 2)*lens_ipow(dx, 2) + -1.69697e-05 *lens_ipow(x, 2)*lens_ipow(y, 2) + -0.00349407 *lens_ipow(x, 3)*dx + -3.55266e-05 *lens_ipow(x, 4) + -0.0302932 *lens_ipow(y, 2)*lens_ipow(dx, 4) + -5.73157e-05 *lens_ipow(y, 4)*lens_ipow(dx, 2) + -8.65597e-09 *lens_ipow(y, 6) + -6.89782e-06 *x*lens_ipow(y, 4)*dx + -1.51472e-07 *lens_ipow(x, 2)*lens_ipow(y, 4) + -0.000978064 *x*lens_ipow(y, 3)*dx*dy*lambda + -3.02342e-05 *lens_ipow(x, 2)*lens_ipow(y, 3)*dy*lambda + -0.0220119 *lens_ipow(y, 3)*lens_ipow(dx, 4)*dy + -2.28423e-09 *lens_ipow(y, 7)*dy + -2.49924e-08 *lens_ipow(x, 6)*y*dy + -0.00171381 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(dy, 2)*lens_ipow(lambda, 3) + -1.93436e-06 *lens_ipow(x, 5)*y*dx*dy*lambda + -0.0708467 *x*lens_ipow(y, 2)*dx*lens_ipow(dy, 2)*lens_ipow(lambda, 4)+0.0f;
const float dx01 =  + -0.000544703 *lens_ipow(x, 2)*y*dx + -1.13131e-05 *lens_ipow(x, 3)*y + -0.0605864 *x*y*lens_ipow(dx, 4) + -0.000229263 *x*lens_ipow(y, 3)*lens_ipow(dx, 2) + -5.19358e-08 *x*lens_ipow(y, 5) + -1.37956e-05 *lens_ipow(x, 2)*lens_ipow(y, 3)*dx + -2.01963e-07 *lens_ipow(x, 3)*lens_ipow(y, 3) + -0.0014671 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx*dy*lambda + -3.02342e-05 *lens_ipow(x, 3)*lens_ipow(y, 2)*dy*lambda + -0.0660357 *x*lens_ipow(y, 2)*lens_ipow(dx, 4)*dy + -1.59896e-08 *x*lens_ipow(y, 6)*dy + -3.57035e-09 *lens_ipow(x, 7)*dy + -0.00114254 *lens_ipow(x, 3)*y*lens_ipow(dy, 2)*lens_ipow(lambda, 3) + -3.22394e-07 *lens_ipow(x, 6)*dx*dy*lambda + -5.28202e-08 *lens_ipow(y, 7)*lens_ipow(dx, 3) + -0.0708467 *lens_ipow(x, 2)*y*dx*lens_ipow(dy, 2)*lens_ipow(lambda, 4)+0.0f;
const float dx02 =  + 31.4721  + -8.62363 *lens_ipow(dy, 2) + -24.2446 *lens_ipow(dx, 2) + 3.85422 *x*dx*lambda + 0.0965951 *lens_ipow(x, 2)*lambda + -51.0623 *x*lens_ipow(dx, 3) + -3.47329 *lens_ipow(x, 2)*lens_ipow(dx, 2) + -0.000272352 *lens_ipow(x, 2)*lens_ipow(y, 2) + -0.0894197 *lens_ipow(x, 3)*dx + -0.000873516 *lens_ipow(x, 4) + -0.121173 *x*lens_ipow(y, 2)*lens_ipow(dx, 3) + -0.000114631 *x*lens_ipow(y, 4)*dx + -3.44891e-06 *lens_ipow(x, 2)*lens_ipow(y, 4) + -0.000489032 *lens_ipow(x, 2)*lens_ipow(y, 3)*dy*lambda + -0.0880476 *x*lens_ipow(y, 3)*lens_ipow(dx, 3)*dy + -3.22394e-07 *lens_ipow(x, 6)*y*dy*lambda + -1.98076e-08 *lens_ipow(y, 8)*lens_ipow(dx, 2) + -0.0354233 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(dy, 2)*lens_ipow(lambda, 4)+0.0f;
const float dx03 =  + -17.2473 *dx*dy + -0.000489032 *lens_ipow(x, 2)*lens_ipow(y, 3)*dx*lambda + -1.0078e-05 *lens_ipow(x, 3)*lens_ipow(y, 3)*lambda + -0.0220119 *x*lens_ipow(y, 3)*lens_ipow(dx, 4) + -2.28423e-09 *x*lens_ipow(y, 7) + -3.57035e-09 *lens_ipow(x, 7)*y + -0.00114254 *lens_ipow(x, 3)*lens_ipow(y, 2)*dy*lens_ipow(lambda, 3) + -3.22394e-07 *lens_ipow(x, 6)*y*dx*lambda + -0.0708467 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx*dy*lens_ipow(lambda, 4)+0.0f;
const float dx04 =  + 1.92711 *x*lens_ipow(dx, 2) + 0.0965951 *lens_ipow(x, 2)*dx + 0.00100401 *lens_ipow(x, 3) + -0.000489032 *lens_ipow(x, 2)*lens_ipow(y, 3)*dx*dy + -1.0078e-05 *lens_ipow(x, 3)*lens_ipow(y, 3)*dy + -0.00171381 *lens_ipow(x, 3)*lens_ipow(y, 2)*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + -3.22394e-07 *lens_ipow(x, 6)*y*dx*dy + -0.141693 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx*lens_ipow(dy, 2)*lens_ipow(lambda, 3)+0.0f;
const float dx10 =  + -0.793736 *dx*dy*lambda + 0.00137323 *x*y*lens_ipow(lambda, 2) + -1.82662e-05 *lens_ipow(x, 3)*y + -8.35234e-07 *lens_ipow(y, 5)*dx + -1.68658e-07 *x*lens_ipow(y, 5) + -0.0318597 *x*y*lens_ipow(dx, 2)*lens_ipow(lambda, 3) + -1.00947e-05 *lens_ipow(x, 4)*y*dx*lambda + -9.11779e-08 *x*lens_ipow(y, 6)*dy + -1.36346e-07 *lens_ipow(x, 2)*lens_ipow(y, 5)*dx + -1.10048e-09 *lens_ipow(x, 3)*lens_ipow(y, 5) + -9.49019e-08 *lens_ipow(x, 5)*y*lens_ipow(lambda, 2) + -1.76408e-08 *x*lens_ipow(y, 7)*lens_ipow(dy, 2) + -4.419e-08 *lens_ipow(x, 2)*lens_ipow(y, 6)*dx*dy + -1.93579e-08 *lens_ipow(x, 3)*lens_ipow(y, 5)*lens_ipow(dx, 2) + -4.78666e-10 *lens_ipow(x, 3)*lens_ipow(y, 6)*dy + -2.22376e-10 *lens_ipow(x, 7)*lens_ipow(y, 2)*dy+0.0f;
const float dx11 =  + -0.929108  + -0.612 *lens_ipow(dy, 2) + -0.00829801 *lens_ipow(y, 2)*lens_ipow(dx, 2) + 0.000686615 *lens_ipow(x, 2)*lens_ipow(lambda, 2) + -4.56655e-06 *lens_ipow(x, 4) + -2.33477e-07 *lens_ipow(y, 6) + -4.17617e-06 *x*lens_ipow(y, 4)*dx + -4.21646e-07 *lens_ipow(x, 2)*lens_ipow(y, 4) + 3.3364e-07 *lens_ipow(y, 6)*lambda + -0.0159298 *lens_ipow(x, 2)*lens_ipow(dx, 2)*lens_ipow(lambda, 3) + -2.01893e-06 *lens_ipow(x, 5)*dx*lambda + 1.11707e-05 *lens_ipow(y, 5)*dy*lens_ipow(lambda, 2) + -8.86993e-08 *lens_ipow(y, 7)*dy + -2.73534e-07 *lens_ipow(x, 2)*lens_ipow(y, 5)*dy + -2.27243e-07 *lens_ipow(x, 3)*lens_ipow(y, 4)*dx + -1.3756e-09 *lens_ipow(x, 4)*lens_ipow(y, 4) + -1.5817e-08 *lens_ipow(x, 6)*lens_ipow(lambda, 2) + -7.3915e-10 *lens_ipow(y, 8)*lambda + -1.05409e-08 *lens_ipow(y, 8)*lens_ipow(dy, 2) + -6.17427e-08 *lens_ipow(x, 2)*lens_ipow(y, 6)*lens_ipow(dy, 2) + -8.838e-08 *lens_ipow(x, 3)*lens_ipow(y, 5)*dx*dy + -2.41974e-08 *lens_ipow(x, 4)*lens_ipow(y, 4)*lens_ipow(dx, 2) + -7.17999e-10 *lens_ipow(x, 4)*lens_ipow(y, 5)*dy + -5.5594e-11 *lens_ipow(x, 8)*y*dy+0.0f;
const float dx12 =  + -59.4271 *dx*dy + -0.793736 *x*dy*lambda + -0.00553201 *lens_ipow(y, 3)*dx + -8.35234e-07 *x*lens_ipow(y, 5) + -0.0318597 *lens_ipow(x, 2)*y*dx*lens_ipow(lambda, 3) + -2.01893e-06 *lens_ipow(x, 5)*y*lambda + -4.54487e-08 *lens_ipow(x, 3)*lens_ipow(y, 5) + -1.473e-08 *lens_ipow(x, 3)*lens_ipow(y, 6)*dy + -9.67896e-09 *lens_ipow(x, 4)*lens_ipow(y, 5)*dx+0.0f;
const float dx13 =  + 61.6535  + -98.7624 *lens_ipow(dy, 2) + -29.7135 *lens_ipow(dx, 2) + -1.224 *y*dy + -0.793736 *x*dx*lambda + 1.86178e-06 *lens_ipow(y, 6)*lens_ipow(lambda, 2) + -1.10874e-08 *lens_ipow(y, 8) + -4.5589e-08 *lens_ipow(x, 2)*lens_ipow(y, 6) + -2.34242e-09 *lens_ipow(y, 9)*dy + -1.76408e-08 *lens_ipow(x, 2)*lens_ipow(y, 7)*dy + -1.473e-08 *lens_ipow(x, 3)*lens_ipow(y, 6)*dx + -1.19667e-10 *lens_ipow(x, 4)*lens_ipow(y, 6) + -2.7797e-11 *lens_ipow(x, 8)*lens_ipow(y, 2)+0.0f;
const float dx14 =  + -0.793736 *x*dx*dy + 0.00137323 *lens_ipow(x, 2)*y*lambda + 4.76629e-08 *lens_ipow(y, 7) + -0.0477895 *lens_ipow(x, 2)*y*lens_ipow(dx, 2)*lens_ipow(lambda, 2) + -2.01893e-06 *lens_ipow(x, 5)*y*dx + 3.72356e-06 *lens_ipow(y, 6)*dy*lambda + -3.1634e-08 *lens_ipow(x, 6)*y*lambda + -8.21278e-11 *lens_ipow(y, 9)+0.0f;
const float dx20 =  + -0.0433309  + -0.00147602 *x*dx + 6.3259e-05 *lens_ipow(x, 2)*lambda + 0.0292307 *lens_ipow(dx, 2)*lens_ipow(lambda, 2) + 0.00325354 *x*dx*lens_ipow(lambda, 2) + -4.30064e-07 *lens_ipow(x, 4) + -7.58294e-05 *lens_ipow(y, 3)*lens_ipow(dx, 2)*dy + -2.02014e-06 *lens_ipow(y, 4)*lens_ipow(dx, 2) + -8.81969e-06 *x*lens_ipow(y, 3)*dx*dy + -1.97586e-07 *x*lens_ipow(y, 4)*dx + -0.00690817 *lens_ipow(x, 2)*lens_ipow(dx, 4) + -2.72513e-07 *lens_ipow(x, 2)*lens_ipow(y, 3)*dy + -4.41113e-09 *lens_ipow(x, 2)*lens_ipow(y, 4) + -0.000711096 *lens_ipow(x, 3)*lens_ipow(dx, 3) + -2.60766e-05 *lens_ipow(x, 4)*lens_ipow(dx, 2) + -2.03787e-09 *lens_ipow(x, 4)*lens_ipow(y, 2) + -4.15141e-07 *lens_ipow(x, 5)*dx + 1.55282e-09 *lens_ipow(x, 2)*lens_ipow(y, 4)*lambda + -8.4765e-13 *lens_ipow(y, 8) + -5.56554e-10 *lens_ipow(x, 5)*lens_ipow(y, 2)*dx + -4.90704e-12 *lens_ipow(x, 8) + 2.26746e-06 *lens_ipow(x, 2)*lens_ipow(y, 3)*lens_ipow(dy, 3)*lambda + -2.83241e-13 *lens_ipow(y, 9)*dy + 2.14242e-09 *x*lens_ipow(y, 6)*lens_ipow(dx, 3) + -1.26884e-12 *lens_ipow(x, 8)*y*dy+0.0f;
const float dx21 =  + -0.000227488 *x*lens_ipow(y, 2)*lens_ipow(dx, 2)*dy + -8.08057e-06 *x*lens_ipow(y, 3)*lens_ipow(dx, 2) + -1.32295e-05 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx*dy + -3.95171e-07 *lens_ipow(x, 2)*lens_ipow(y, 3)*dx + -2.72513e-07 *lens_ipow(x, 3)*lens_ipow(y, 2)*dy + -5.88151e-09 *lens_ipow(x, 3)*lens_ipow(y, 3) + -8.15147e-10 *lens_ipow(x, 5)*y + 2.07043e-09 *lens_ipow(x, 3)*lens_ipow(y, 3)*lambda + -1.06101e-06 *lens_ipow(y, 5)*lens_ipow(dx, 3) + -6.7812e-12 *x*lens_ipow(y, 7) + -1.85518e-10 *lens_ipow(x, 6)*y*dx + 2.26746e-06 *lens_ipow(x, 3)*lens_ipow(y, 2)*lens_ipow(dy, 3)*lambda + -2.98723e-07 *lens_ipow(y, 6)*lens_ipow(dx, 3)*dy + -2.54917e-12 *x*lens_ipow(y, 8)*dy + 6.42725e-09 *lens_ipow(x, 2)*lens_ipow(y, 5)*lens_ipow(dx, 3) + -1.40982e-13 *lens_ipow(x, 9)*dy+0.0f;
const float dx22 =  + 0.293479  + -0.000738011 *lens_ipow(x, 2) + 0.0584615 *x*dx*lens_ipow(lambda, 2) + 0.00162677 *lens_ipow(x, 2)*lens_ipow(lambda, 2) + -0.000151659 *x*lens_ipow(y, 3)*dx*dy + -4.04028e-06 *x*lens_ipow(y, 4)*dx + -4.40985e-06 *lens_ipow(x, 2)*lens_ipow(y, 3)*dy + -9.87928e-08 *lens_ipow(x, 2)*lens_ipow(y, 4) + -0.00921089 *lens_ipow(x, 3)*lens_ipow(dx, 3) + -0.000533322 *lens_ipow(x, 4)*lens_ipow(dx, 2) + -1.04306e-05 *lens_ipow(x, 5)*dx + -6.91901e-08 *lens_ipow(x, 6) + -5.30505e-07 *lens_ipow(y, 6)*lens_ipow(dx, 2) + -9.2759e-11 *lens_ipow(x, 6)*lens_ipow(y, 2) + -1.28024e-07 *lens_ipow(y, 7)*lens_ipow(dx, 2)*dy + 3.21362e-09 *lens_ipow(x, 2)*lens_ipow(y, 6)*lens_ipow(dx, 2)+0.0f;
const float dx23 =  + -7.58294e-05 *x*lens_ipow(y, 3)*lens_ipow(dx, 2) + -4.40985e-06 *lens_ipow(x, 2)*lens_ipow(y, 3)*dx + -9.08377e-08 *lens_ipow(x, 3)*lens_ipow(y, 3) + 2.26746e-06 *lens_ipow(x, 3)*lens_ipow(y, 3)*lens_ipow(dy, 2)*lambda + -4.26747e-08 *lens_ipow(y, 7)*lens_ipow(dx, 3) + -2.83241e-13 *x*lens_ipow(y, 9) + -1.40982e-13 *lens_ipow(x, 9)*y+0.0f;
const float dx24 =  + 2.10863e-05 *lens_ipow(x, 3) + 0.0584615 *x*lens_ipow(dx, 2)*lambda + 0.00325354 *lens_ipow(x, 2)*dx*lambda + 5.17608e-10 *lens_ipow(x, 3)*lens_ipow(y, 4) + 7.55821e-07 *lens_ipow(x, 3)*lens_ipow(y, 3)*lens_ipow(dy, 3)+0.0f;
const float dx30 =  + -0.00319904 *dx*dy + -8.86404e-05 *x*dy + -5.30039e-06 *x*y + -6.8807e-08 *lens_ipow(x, 2)*lens_ipow(y, 3)*dx*lambda + -3.03255e-09 *lens_ipow(y, 6)*dx*dy + -4.49879e-11 *lens_ipow(y, 7)*dx + -2.30321e-06 *x*lens_ipow(y, 3)*lens_ipow(dx, 2)*lens_ipow(lambda, 2) + -2.41516e-12 *x*lens_ipow(y, 7) + -1.19488e-11 *lens_ipow(x, 5)*lens_ipow(y, 3) + -0.000543455 *lens_ipow(y, 3)*lens_ipow(dx, 3)*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + -6.55549e-13 *x*lens_ipow(y, 8)*dy + 7.45302e-09 *lens_ipow(x, 4)*lens_ipow(y, 3)*dx*lens_ipow(dy, 2) + -4.5456e-12 *lens_ipow(x, 5)*lens_ipow(y, 4)*dy + -2.52818e-12 *lens_ipow(x, 6)*lens_ipow(y, 3)*dx+0.0f;
const float dx31 =  + -0.0161861  + -0.00258321 *lens_ipow(dx, 2) + -8.69786e-06 *lens_ipow(y, 2) + -2.6502e-06 *lens_ipow(x, 2) + -0.0014317 *y*dy*lambda + 2.30304e-05 *lens_ipow(y, 2)*lambda + -0.0345408 *lens_ipow(dy, 4) + 0.00247535 *y*dy*lens_ipow(lambda, 2) + -0.000110873 *lens_ipow(y, 3)*lens_ipow(dy, 3) + -6.28708e-06 *lens_ipow(y, 4)*lens_ipow(dy, 2) + -1.16295e-07 *lens_ipow(y, 5)*dy + -7.54486e-10 *lens_ipow(y, 6) + -6.8807e-08 *lens_ipow(x, 3)*lens_ipow(y, 2)*dx*lambda + -1.81953e-08 *x*lens_ipow(y, 5)*dx*dy + -3.14915e-10 *x*lens_ipow(y, 6)*dx + -3.45481e-06 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(dx, 2)*lens_ipow(lambda, 2) + -8.45306e-12 *lens_ipow(x, 2)*lens_ipow(y, 6) + -5.97439e-12 *lens_ipow(x, 6)*lens_ipow(y, 2) + -0.0235023 *y*lens_ipow(dy, 3)*lens_ipow(lambda, 6) + -8.06711e-12 *lens_ipow(y, 8)*lens_ipow(dx, 2) + -0.00163037 *x*lens_ipow(y, 2)*lens_ipow(dx, 3)*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + -2.6222e-12 *lens_ipow(x, 2)*lens_ipow(y, 7)*dy + 4.47181e-09 *lens_ipow(x, 5)*lens_ipow(y, 2)*dx*lens_ipow(dy, 2) + -3.0304e-12 *lens_ipow(x, 6)*lens_ipow(y, 3)*dy + -1.0835e-12 *lens_ipow(x, 7)*lens_ipow(y, 2)*dx+0.0f;
const float dx32 =  + -0.00516642 *y*dx + -0.00319904 *x*dy + -2.29357e-08 *lens_ipow(x, 3)*lens_ipow(y, 3)*lambda + -3.03255e-09 *x*lens_ipow(y, 6)*dy + -4.49879e-11 *x*lens_ipow(y, 7) + -2.30321e-06 *lens_ipow(x, 2)*lens_ipow(y, 3)*dx*lens_ipow(lambda, 2) + -1.79269e-12 *lens_ipow(y, 9)*dx + -0.00163037 *x*lens_ipow(y, 3)*lens_ipow(dx, 2)*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + 1.4906e-09 *lens_ipow(x, 5)*lens_ipow(y, 3)*lens_ipow(dy, 2) + -3.61168e-13 *lens_ipow(x, 7)*lens_ipow(y, 3)+0.0f;
const float dx33 =  + -0.00360374 *lambda + -0.00319904 *x*dx + -4.43202e-05 *lens_ipow(x, 2) + -0.000715848 *lens_ipow(y, 2)*lambda + -0.138163 *y*lens_ipow(dy, 3) + 0.00123768 *lens_ipow(y, 2)*lens_ipow(lambda, 2) + -8.31545e-05 *lens_ipow(y, 4)*lens_ipow(dy, 2) + -2.51483e-06 *lens_ipow(y, 5)*dy + -1.93824e-08 *lens_ipow(y, 6) + -3.03255e-09 *x*lens_ipow(y, 6)*dx + -0.0352535 *lens_ipow(y, 2)*lens_ipow(dy, 2)*lens_ipow(lambda, 6) + -0.00108691 *x*lens_ipow(y, 3)*lens_ipow(dx, 3)*dy*lens_ipow(lambda, 2) + -3.27775e-13 *lens_ipow(x, 2)*lens_ipow(y, 8) + 2.98121e-09 *lens_ipow(x, 5)*lens_ipow(y, 3)*dx*dy + -7.576e-13 *lens_ipow(x, 6)*lens_ipow(y, 4)+0.0f;
const float dx34 =  + -0.00360374 *dy + -0.000715848 *lens_ipow(y, 2)*dy + 7.67678e-06 *lens_ipow(y, 3) + 0.00247535 *lens_ipow(y, 2)*dy*lambda + -2.29357e-08 *lens_ipow(x, 3)*lens_ipow(y, 3)*dx + -2.30321e-06 *lens_ipow(x, 2)*lens_ipow(y, 3)*lens_ipow(dx, 2)*lambda + -0.070507 *lens_ipow(y, 2)*lens_ipow(dy, 3)*lens_ipow(lambda, 5) + -0.00108691 *x*lens_ipow(y, 3)*lens_ipow(dx, 3)*lens_ipow(dy, 2)*lambda+0.0f;
const float dx40 =  + -0.00407108 *dx + -0.00209159 *y*dx*dy + -6.03785e-05 *lens_ipow(y, 2)*dx + -0.00190572 *x*lens_ipow(dx, 2) + -4.53503e-06 *x*lens_ipow(y, 2) + -2.2355e-06 *x*lens_ipow(y, 3)*dy + -2.16064e-06 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx + -8.07485e-07 *lens_ipow(x, 3)*y*dy + -2.68194e-08 *lens_ipow(x, 5) + -4.24286e-07 *x*lens_ipow(y, 4)*lens_ipow(dy, 2) + -3.73249e-07 *lens_ipow(x, 3)*lens_ipow(y, 2)*lens_ipow(dx, 2) + -7.6369e-11 *lens_ipow(x, 3)*lens_ipow(y, 4) + -1.42961e-08 *lens_ipow(x, 6)*dx + -8.48189e-07 *lens_ipow(x, 2)*lens_ipow(y, 3)*dx*dy*lambda + -3.98509e-08 *lens_ipow(x, 6)*lens_ipow(dx, 3) + -2.69711e-09 *lens_ipow(x, 7)*lens_ipow(dx, 2)+0.0f;
const float dx41 =  + -0.00941468 *dy*lambda + -0.00152829 *y*lens_ipow(dx, 2) + -1.70602e-06 *lens_ipow(y, 3) + -0.00209159 *x*dx*dy + -0.000120757 *x*y*dx + -4.53503e-06 *lens_ipow(x, 2)*y + -0.00336209 *y*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + -3.35326e-06 *lens_ipow(x, 2)*lens_ipow(y, 2)*dy + -1.44043e-06 *lens_ipow(x, 3)*y*dx + -2.01871e-07 *lens_ipow(x, 4)*dy + -1.37246e-08 *lens_ipow(y, 6)*dy + -7.99144e-11 *lens_ipow(y, 7) + -8.48571e-07 *lens_ipow(x, 2)*lens_ipow(y, 3)*lens_ipow(dy, 2) + -1.86624e-07 *lens_ipow(x, 4)*y*lens_ipow(dx, 2) + -7.6369e-11 *lens_ipow(x, 4)*lens_ipow(y, 3) + -8.48189e-07 *lens_ipow(x, 3)*lens_ipow(y, 2)*dx*dy*lambda + -2.02142e-09 *lens_ipow(y, 7)*lens_ipow(dy, 2)+0.0f;
const float dx42 =  + -0.162141 *dx + -0.00407108 *x + -0.00152829 *lens_ipow(y, 2)*dx + -0.00209159 *x*y*dy + -6.03785e-05 *x*lens_ipow(y, 2) + -0.00190572 *lens_ipow(x, 2)*dx + -7.20214e-07 *lens_ipow(x, 3)*lens_ipow(y, 2) + -1.86624e-07 *lens_ipow(x, 4)*lens_ipow(y, 2)*dx + -2.0423e-09 *lens_ipow(x, 7) + -2.8273e-07 *lens_ipow(x, 3)*lens_ipow(y, 3)*dy*lambda + -1.7079e-08 *lens_ipow(x, 7)*lens_ipow(dx, 2) + -6.74277e-10 *lens_ipow(x, 8)*dx+0.0f;
const float dx43 =  + -0.426825 *dy*lambda + -0.00941468 *y*lambda + -0.00209159 *x*y*dx + -0.00336209 *lens_ipow(y, 2)*dy*lens_ipow(lambda, 2) + -1.11775e-06 *lens_ipow(x, 2)*lens_ipow(y, 3) + -2.01871e-07 *lens_ipow(x, 4)*y + -1.96065e-09 *lens_ipow(y, 7) + -4.24286e-07 *lens_ipow(x, 2)*lens_ipow(y, 4)*dy + -2.8273e-07 *lens_ipow(x, 3)*lens_ipow(y, 3)*dx*lambda + -5.05354e-10 *lens_ipow(y, 8)*dy+0.0f;
const float dx44 =  + 0.361439  + -0.487131 *lambda + -0.213413 *lens_ipow(dy, 2) + -0.00941468 *y*dy + -0.00336209 *lens_ipow(y, 2)*lens_ipow(dy, 2)*lambda + -2.8273e-07 *lens_ipow(x, 3)*lens_ipow(y, 3)*dx*dy+0.0f;
} break;
