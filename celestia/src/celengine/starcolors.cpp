// starcolors.cpp
//
// Copyright (C) 2004, Chris Laurel <claurel@shatters.net>
//
// Tables of star colors, indexed by temperature.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

#include <cstdlib>
#include "starcolors.h"


// Approximate colors used by older versions of Celestia
Color StarColors_Enhanced[41] =
{
    Color(0.00f, 0.00f, 0.00f), // T = 0K
    Color(0.75f, 0.20f, 0.20f), // T = 1000K
    Color(1.00f, 0.40f, 0.40f), // T = 2000K
    Color(1.00f, 0.70f, 0.70f), // T = 3000K
    Color(1.00f, 0.90f, 0.70f), // T = 4000K
    Color(1.00f, 1.00f, 0.75f), // T = 5000K
    Color(1.00f, 1.00f, 0.88f), // T = 6000K
    Color(1.00f, 1.00f, 0.95f), // T = 7000K
    Color(1.00f, 1.00f, 1.00f), // T = 8000K
    Color(0.95f, 0.98f, 1.00f), // T = 9000K
    Color(0.90f, 0.95f, 1.00f), // T = 10000K
    Color(0.85f, 0.93f, 1.00f), // T = 11000K
    Color(0.80f, 0.90f, 1.00f), // T = 12000K
    Color(0.79f, 0.89f, 1.00f), // T = 13000K
    Color(0.78f, 0.88f, 1.00f), // T = 14000K
    Color(0.77f, 0.87f, 1.00f), // T = 15000K
    Color(0.76f, 0.86f, 1.00f), // T = 16000K
    Color(0.75f, 0.85f, 1.00f), // T = 17000K
    Color(0.74f, 0.84f, 1.00f), // T = 18000K
    Color(0.73f, 0.83f, 1.00f), // T = 19000K
    Color(0.72f, 0.82f, 1.00f), // T = 20000K
    Color(0.71f, 0.81f, 1.00f), // T = 21000K
    Color(0.70f, 0.80f, 1.00f), // T = 22000K
    Color(0.69f, 0.79f, 1.00f), // T = 23000K
    Color(0.68f, 0.78f, 1.00f), // T = 24000K
    Color(0.67f, 0.77f, 1.00f), // T = 25000K
    Color(0.66f, 0.76f, 1.00f), // T = 26000K
    Color(0.65f, 0.75f, 1.00f), // T = 27000K
    Color(0.65f, 0.75f, 1.00f), // T = 28000K
    Color(0.64f, 0.74f, 1.00f), // T = 29000K
    Color(0.64f, 0.74f, 1.00f), // T = 30000K
    Color(0.63f, 0.73f, 1.00f), // T = 31000K
    Color(0.63f, 0.73f, 1.00f), // T = 32000K
    Color(0.62f, 0.72f, 1.00f), // T = 33000K
    Color(0.62f, 0.72f, 1.00f), // T = 34000K
    Color(0.61f, 0.71f, 1.00f), // T = 35000K
    Color(0.61f, 0.71f, 1.00f), // T = 36000K
    Color(0.60f, 0.70f, 1.00f), // T = 37000K
    Color(0.60f, 0.70f, 1.00f), // T = 38000K
    Color(0.60f, 0.70f, 1.00f), // T = 39000K
    Color(0.60f, 0.70f, 1.00f), // T = 40000K
};


// Black body colors, CIE standard 2 degree observer and D65 white point
// Generated by Mitchell Charity <mcharity@lcs.mit.edu>
// See "What Color is a Blackbody":
//     http://www.vendian.org/mncharity/dir3/blackbody/
Color StarColors_Blackbody_2deg_D65[401] =
{
    Color(0.0000f, 0.0000f, 0.0000f),    // T=     0K P=2.472e+06   
    Color(1.0000f, 0.0337f, 0.0000f),    // T=   100K P=2.472e+06   
    Color(1.0000f, 0.0337f, 0.0000f),    // T=   200K P=2.472e+06   
    Color(1.0000f, 0.0337f, 0.0000f),    // T=   300K P=2.472e+06   
    Color(1.0000f, 0.0337f, 0.0000f),    // T=   400K P=2.472e+06   
    Color(1.0000f, 0.0337f, 0.0000f),    // T=   500K P=2.472e+06   
    Color(1.0000f, 0.0337f, 0.0000f),    // T=   600K P=2.472e+06   
    Color(1.0000f, 0.0337f, 0.0000f),    // T=   700K P=2.472e+06   
    Color(1.0000f, 0.0337f, 0.0000f),    // T=   800K P=2.472e+06   
    Color(1.0000f, 0.0337f, 0.0000f),    // T=   900K P=2.472e+06   
    Color(1.0000f, 0.0337f, 0.0000f),    // T=  1000K P=2.472e+06   
    Color(1.0000f, 0.0592f, 0.0000f),    // T=  1100K P=2.112e+07   
    Color(1.0000f, 0.0846f, 0.0000f),    // T=  1200K P=1.282e+08   
    Color(1.0000f, 0.1096f, 0.0000f),    // T=  1300K P=5.959e+08   
    Color(1.0000f, 0.1341f, 0.0000f),    // T=  1400K P=2.243e+09   
    Color(1.0000f, 0.1578f, 0.0000f),    // T=  1500K P=7.121e+09   
    Color(1.0000f, 0.1806f, 0.0000f),    // T=  1600K P=1.967e+10   
    Color(1.0000f, 0.2025f, 0.0000f),    // T=  1700K P=4.839e+10   
    Color(1.0000f, 0.2235f, 0.0000f),    // T=  1800K P=1.081e+11   
    Color(1.0000f, 0.2434f, 0.0000f),    // T=  1900K P=2.224e+11   
    Color(1.0000f, 0.2647f, 0.0033f),    // T=  2000K P=4.268e+11   
    Color(1.0000f, 0.2889f, 0.0120f),    // T=  2100K P=7.710e+11   
    Color(1.0000f, 0.3126f, 0.0219f),    // T=  2200K P=1.322e+12   
    Color(1.0000f, 0.3360f, 0.0331f),    // T=  2300K P=2.166e+12   
    Color(1.0000f, 0.3589f, 0.0454f),    // T=  2400K P=3.408e+12   
    Color(1.0000f, 0.3814f, 0.0588f),    // T=  2500K P=5.178e+12   
    Color(1.0000f, 0.4034f, 0.0734f),    // T=  2600K P=7.624e+12   
    Color(1.0000f, 0.4250f, 0.0889f),    // T=  2700K P=1.092e+13   
    Color(1.0000f, 0.4461f, 0.1054f),    // T=  2800K P=1.524e+13   
    Color(1.0000f, 0.4668f, 0.1229f),    // T=  2900K P=2.081e+13   
    Color(1.0000f, 0.4870f, 0.1411f),    // T=  3000K P=2.784e+13   
    Color(1.0000f, 0.5067f, 0.1602f),    // T=  3100K P=3.657e+13   
    Color(1.0000f, 0.5259f, 0.1800f),    // T=  3200K P=4.725e+13   
    Color(1.0000f, 0.5447f, 0.2005f),    // T=  3300K P=6.012e+13   
    Color(1.0000f, 0.5630f, 0.2216f),    // T=  3400K P=7.545e+13   
    Color(1.0000f, 0.5809f, 0.2433f),    // T=  3500K P=9.349e+13   
    Color(1.0000f, 0.5983f, 0.2655f),    // T=  3600K P=1.145e+14   
    Color(1.0000f, 0.6153f, 0.2881f),    // T=  3700K P=1.387e+14   
    Color(1.0000f, 0.6318f, 0.3112f),    // T=  3800K P=1.665e+14   
    Color(1.0000f, 0.6480f, 0.3346f),    // T=  3900K P=1.979e+14   
    Color(1.0000f, 0.6636f, 0.3583f),    // T=  4000K P=2.333e+14   
    Color(1.0000f, 0.6789f, 0.3823f),    // T=  4100K P=2.729e+14   
    Color(1.0000f, 0.6938f, 0.4066f),    // T=  4200K P=3.169e+14   
    Color(1.0000f, 0.7083f, 0.4310f),    // T=  4300K P=3.654e+14   
    Color(1.0000f, 0.7223f, 0.4556f),    // T=  4400K P=4.188e+14   
    Color(1.0000f, 0.7360f, 0.4803f),    // T=  4500K P=4.771e+14   
    Color(1.0000f, 0.7494f, 0.5051f),    // T=  4600K P=5.406e+14   
    Color(1.0000f, 0.7623f, 0.5299f),    // T=  4700K P=6.093e+14   
    Color(1.0000f, 0.7750f, 0.5548f),    // T=  4800K P=6.835e+14   
    Color(1.0000f, 0.7872f, 0.5797f),    // T=  4900K P=7.632e+14   
    Color(1.0000f, 0.7992f, 0.6045f),    // T=  5000K P=8.485e+14   
    Color(1.0000f, 0.8108f, 0.6293f),    // T=  5100K P=9.396e+14   
    Color(1.0000f, 0.8221f, 0.6541f),    // T=  5200K P=1.036e+15   
    Color(1.0000f, 0.8330f, 0.6787f),    // T=  5300K P=1.139e+15   
    Color(1.0000f, 0.8437f, 0.7032f),    // T=  5400K P=1.248e+15   
    Color(1.0000f, 0.8541f, 0.7277f),    // T=  5500K P=1.363e+15   
    Color(1.0000f, 0.8642f, 0.7519f),    // T=  5600K P=1.484e+15   
    Color(1.0000f, 0.8740f, 0.7760f),    // T=  5700K P=1.611e+15   
    Color(1.0000f, 0.8836f, 0.8000f),    // T=  5800K P=1.744e+15   
    Color(1.0000f, 0.8929f, 0.8238f),    // T=  5900K P=1.883e+15   
    Color(1.0000f, 0.9019f, 0.8473f),    // T=  6000K P=2.028e+15   
    Color(1.0000f, 0.9107f, 0.8707f),    // T=  6100K P=2.179e+15   
    Color(1.0000f, 0.9193f, 0.8939f),    // T=  6200K P=2.337e+15   
    Color(1.0000f, 0.9276f, 0.9168f),    // T=  6300K P=2.500e+15   
    Color(1.0000f, 0.9357f, 0.9396f),    // T=  6400K P=2.669e+15   
    Color(1.0000f, 0.9436f, 0.9621f),    // T=  6500K P=2.845e+15   
    Color(1.0000f, 0.9513f, 0.9844f),    // T=  6600K P=3.026e+15   
    Color(0.9937f, 0.9526f, 1.0000f),    // T=  6700K P=3.214e+15   
    Color(0.9726f, 0.9395f, 1.0000f),    // T=  6800K P=3.407e+15   
    Color(0.9526f, 0.9270f, 1.0000f),    // T=  6900K P=3.606e+15   
    Color(0.9337f, 0.9150f, 1.0000f),    // T=  7000K P=3.811e+15   
    Color(0.9157f, 0.9035f, 1.0000f),    // T=  7100K P=4.022e+15   
    Color(0.8986f, 0.8925f, 1.0000f),    // T=  7200K P=4.238e+15   
    Color(0.8823f, 0.8819f, 1.0000f),    // T=  7300K P=4.460e+15   
    Color(0.8668f, 0.8718f, 1.0000f),    // T=  7400K P=4.688e+15   
    Color(0.8520f, 0.8621f, 1.0000f),    // T=  7500K P=4.920e+15   
    Color(0.8379f, 0.8527f, 1.0000f),    // T=  7600K P=5.159e+15   
    Color(0.8244f, 0.8437f, 1.0000f),    // T=  7700K P=5.402e+15   
    Color(0.8115f, 0.8351f, 1.0000f),    // T=  7800K P=5.651e+15   
    Color(0.7992f, 0.8268f, 1.0000f),    // T=  7900K P=5.906e+15   
    Color(0.7874f, 0.8187f, 1.0000f),    // T=  8000K P=6.165e+15   
    Color(0.7761f, 0.8110f, 1.0000f),    // T=  8100K P=6.429e+15   
    Color(0.7652f, 0.8035f, 1.0000f),    // T=  8200K P=6.698e+15   
    Color(0.7548f, 0.7963f, 1.0000f),    // T=  8300K P=6.973e+15   
    Color(0.7449f, 0.7894f, 1.0000f),    // T=  8400K P=7.252e+15   
    Color(0.7353f, 0.7827f, 1.0000f),    // T=  8500K P=7.535e+15   
    Color(0.7260f, 0.7762f, 1.0000f),    // T=  8600K P=7.824e+15   
    Color(0.7172f, 0.7699f, 1.0000f),    // T=  8700K P=8.117e+15   
    Color(0.7086f, 0.7638f, 1.0000f),    // T=  8800K P=8.415e+15   
    Color(0.7004f, 0.7579f, 1.0000f),    // T=  8900K P=8.717e+15   
    Color(0.6925f, 0.7522f, 1.0000f),    // T=  9000K P=9.023e+15   
    Color(0.6848f, 0.7467f, 1.0000f),    // T=  9100K P=9.334e+15   
    Color(0.6774f, 0.7414f, 1.0000f),    // T=  9200K P=9.649e+15   
    Color(0.6703f, 0.7362f, 1.0000f),    // T=  9300K P=9.969e+15   
    Color(0.6635f, 0.7311f, 1.0000f),    // T=  9400K P=1.029e+16   
    Color(0.6568f, 0.7263f, 1.0000f),    // T=  9500K P=1.062e+16   
    Color(0.6504f, 0.7215f, 1.0000f),    // T=  9600K P=1.095e+16   
    Color(0.6442f, 0.7169f, 1.0000f),    // T=  9700K P=1.129e+16   
    Color(0.6382f, 0.7124f, 1.0000f),    // T=  9800K P=1.163e+16   
    Color(0.6324f, 0.7081f, 1.0000f),    // T=  9900K P=1.197e+16   
    Color(0.6268f, 0.7039f, 1.0000f),    // T= 10000K P=1.231e+16   
    Color(0.6213f, 0.6998f, 1.0000f),    // T= 10100K P=1.267e+16   
    Color(0.6161f, 0.6958f, 1.0000f),    // T= 10200K P=1.302e+16   
    Color(0.6109f, 0.6919f, 1.0000f),    // T= 10300K P=1.338e+16   
    Color(0.6060f, 0.6881f, 1.0000f),    // T= 10400K P=1.374e+16   
    Color(0.6012f, 0.6844f, 1.0000f),    // T= 10500K P=1.410e+16   
    Color(0.5965f, 0.6808f, 1.0000f),    // T= 10600K P=1.447e+16   
    Color(0.5919f, 0.6773f, 1.0000f),    // T= 10700K P=1.484e+16   
    Color(0.5875f, 0.6739f, 1.0000f),    // T= 10800K P=1.521e+16   
    Color(0.5833f, 0.6706f, 1.0000f),    // T= 10900K P=1.559e+16   
    Color(0.5791f, 0.6674f, 1.0000f),    // T= 11000K P=1.597e+16   
    Color(0.5750f, 0.6642f, 1.0000f),    // T= 11100K P=1.636e+16   
    Color(0.5711f, 0.6611f, 1.0000f),    // T= 11200K P=1.674e+16   
    Color(0.5673f, 0.6581f, 1.0000f),    // T= 11300K P=1.713e+16   
    Color(0.5636f, 0.6552f, 1.0000f),    // T= 11400K P=1.752e+16   
    Color(0.5599f, 0.6523f, 1.0000f),    // T= 11500K P=1.792e+16   
    Color(0.5564f, 0.6495f, 1.0000f),    // T= 11600K P=1.832e+16   
    Color(0.5530f, 0.6468f, 1.0000f),    // T= 11700K P=1.872e+16   
    Color(0.5496f, 0.6441f, 1.0000f),    // T= 11800K P=1.912e+16   
    Color(0.5463f, 0.6415f, 1.0000f),    // T= 11900K P=1.953e+16   
    Color(0.5431f, 0.6389f, 1.0000f),    // T= 12000K P=1.994e+16   
    Color(0.5400f, 0.6364f, 1.0000f),    // T= 12100K P=2.035e+16   
    Color(0.5370f, 0.6340f, 1.0000f),    // T= 12200K P=2.076e+16   
    Color(0.5340f, 0.6316f, 1.0000f),    // T= 12300K P=2.118e+16   
    Color(0.5312f, 0.6293f, 1.0000f),    // T= 12400K P=2.160e+16   
    Color(0.5283f, 0.6270f, 1.0000f),    // T= 12500K P=2.202e+16   
    Color(0.5256f, 0.6247f, 1.0000f),    // T= 12600K P=2.244e+16   
    Color(0.5229f, 0.6225f, 1.0000f),    // T= 12700K P=2.287e+16   
    Color(0.5203f, 0.6204f, 1.0000f),    // T= 12800K P=2.330e+16   
    Color(0.5177f, 0.6183f, 1.0000f),    // T= 12900K P=2.373e+16   
    Color(0.5152f, 0.6162f, 1.0000f),    // T= 13000K P=2.416e+16   
    Color(0.5128f, 0.6142f, 1.0000f),    // T= 13100K P=2.459e+16   
    Color(0.5104f, 0.6122f, 1.0000f),    // T= 13200K P=2.503e+16   
    Color(0.5080f, 0.6103f, 1.0000f),    // T= 13300K P=2.547e+16   
    Color(0.5057f, 0.6084f, 1.0000f),    // T= 13400K P=2.591e+16   
    Color(0.5035f, 0.6065f, 1.0000f),    // T= 13500K P=2.635e+16   
    Color(0.5013f, 0.6047f, 1.0000f),    // T= 13600K P=2.680e+16   
    Color(0.4991f, 0.6029f, 1.0000f),    // T= 13700K P=2.724e+16   
    Color(0.4970f, 0.6012f, 1.0000f),    // T= 13800K P=2.769e+16   
    Color(0.4950f, 0.5994f, 1.0000f),    // T= 13900K P=2.814e+16   
    Color(0.4930f, 0.5978f, 1.0000f),    // T= 14000K P=2.860e+16   
    Color(0.4910f, 0.5961f, 1.0000f),    // T= 14100K P=2.905e+16   
    Color(0.4891f, 0.5945f, 1.0000f),    // T= 14200K P=2.951e+16   
    Color(0.4872f, 0.5929f, 1.0000f),    // T= 14300K P=2.997e+16   
    Color(0.4853f, 0.5913f, 1.0000f),    // T= 14400K P=3.043e+16   
    Color(0.4835f, 0.5898f, 1.0000f),    // T= 14500K P=3.089e+16   
    Color(0.4817f, 0.5882f, 1.0000f),    // T= 14600K P=3.135e+16   
    Color(0.4799f, 0.5868f, 1.0000f),    // T= 14700K P=3.182e+16   
    Color(0.4782f, 0.5853f, 1.0000f),    // T= 14800K P=3.228e+16   
    Color(0.4765f, 0.5839f, 1.0000f),    // T= 14900K P=3.275e+16   
    Color(0.4749f, 0.5824f, 1.0000f),    // T= 15000K P=3.322e+16   
    Color(0.4733f, 0.5811f, 1.0000f),    // T= 15100K P=3.369e+16   
    Color(0.4717f, 0.5797f, 1.0000f),    // T= 15200K P=3.416e+16   
    Color(0.4701f, 0.5784f, 1.0000f),    // T= 15300K P=3.464e+16   
    Color(0.4686f, 0.5770f, 1.0000f),    // T= 15400K P=3.511e+16   
    Color(0.4671f, 0.5757f, 1.0000f),    // T= 15500K P=3.559e+16   
    Color(0.4656f, 0.5745f, 1.0000f),    // T= 15600K P=3.607e+16   
    Color(0.4641f, 0.5732f, 1.0000f),    // T= 15700K P=3.655e+16   
    Color(0.4627f, 0.5720f, 1.0000f),    // T= 15800K P=3.703e+16   
    Color(0.4613f, 0.5708f, 1.0000f),    // T= 15900K P=3.751e+16   
    Color(0.4599f, 0.5696f, 1.0000f),    // T= 16000K P=3.800e+16   
    Color(0.4586f, 0.5684f, 1.0000f),    // T= 16100K P=3.848e+16   
    Color(0.4572f, 0.5673f, 1.0000f),    // T= 16200K P=3.897e+16   
    Color(0.4559f, 0.5661f, 1.0000f),    // T= 16300K P=3.946e+16   
    Color(0.4546f, 0.5650f, 1.0000f),    // T= 16400K P=3.995e+16   
    Color(0.4534f, 0.5639f, 1.0000f),    // T= 16500K P=4.044e+16   
    Color(0.4521f, 0.5628f, 1.0000f),    // T= 16600K P=4.093e+16   
    Color(0.4509f, 0.5617f, 1.0000f),    // T= 16700K P=4.143e+16   
    Color(0.4497f, 0.5607f, 1.0000f),    // T= 16800K P=4.192e+16   
    Color(0.4485f, 0.5597f, 1.0000f),    // T= 16900K P=4.241e+16   
    Color(0.4474f, 0.5586f, 1.0000f),    // T= 17000K P=4.291e+16   
    Color(0.4462f, 0.5576f, 1.0000f),    // T= 17100K P=4.341e+16   
    Color(0.4451f, 0.5566f, 1.0000f),    // T= 17200K P=4.391e+16   
    Color(0.4440f, 0.5557f, 1.0000f),    // T= 17300K P=4.441e+16   
    Color(0.4429f, 0.5547f, 1.0000f),    // T= 17400K P=4.491e+16   
    Color(0.4418f, 0.5538f, 1.0000f),    // T= 17500K P=4.541e+16   
    Color(0.4408f, 0.5528f, 1.0000f),    // T= 17600K P=4.592e+16   
    Color(0.4397f, 0.5519f, 1.0000f),    // T= 17700K P=4.642e+16   
    Color(0.4387f, 0.5510f, 1.0000f),    // T= 17800K P=4.693e+16   
    Color(0.4377f, 0.5501f, 1.0000f),    // T= 17900K P=4.743e+16   
    Color(0.4367f, 0.5492f, 1.0000f),    // T= 18000K P=4.794e+16   
    Color(0.4357f, 0.5483f, 1.0000f),    // T= 18100K P=4.845e+16   
    Color(0.4348f, 0.5475f, 1.0000f),    // T= 18200K P=4.896e+16   
    Color(0.4338f, 0.5466f, 1.0000f),    // T= 18300K P=4.947e+16   
    Color(0.4329f, 0.5458f, 1.0000f),    // T= 18400K P=4.998e+16   
    Color(0.4319f, 0.5450f, 1.0000f),    // T= 18500K P=5.049e+16   
    Color(0.4310f, 0.5442f, 1.0000f),    // T= 18600K P=5.100e+16   
    Color(0.4301f, 0.5434f, 1.0000f),    // T= 18700K P=5.152e+16   
    Color(0.4293f, 0.5426f, 1.0000f),    // T= 18800K P=5.203e+16   
    Color(0.4284f, 0.5418f, 1.0000f),    // T= 18900K P=5.255e+16   
    Color(0.4275f, 0.5410f, 1.0000f),    // T= 19000K P=5.307e+16   
    Color(0.4267f, 0.5403f, 1.0000f),    // T= 19100K P=5.358e+16   
    Color(0.4258f, 0.5395f, 1.0000f),    // T= 19200K P=5.410e+16   
    Color(0.4250f, 0.5388f, 1.0000f),    // T= 19300K P=5.462e+16   
    Color(0.4242f, 0.5381f, 1.0000f),    // T= 19400K P=5.514e+16   
    Color(0.4234f, 0.5373f, 1.0000f),    // T= 19500K P=5.566e+16   
    Color(0.4226f, 0.5366f, 1.0000f),    // T= 19600K P=5.618e+16   
    Color(0.4218f, 0.5359f, 1.0000f),    // T= 19700K P=5.671e+16   
    Color(0.4211f, 0.5352f, 1.0000f),    // T= 19800K P=5.723e+16   
    Color(0.4203f, 0.5345f, 1.0000f),    // T= 19900K P=5.775e+16   
    Color(0.4196f, 0.5339f, 1.0000f),    // T= 20000K P=5.828e+16   
    Color(0.4188f, 0.5332f, 1.0000f),    // T= 20100K P=5.880e+16   
    Color(0.4181f, 0.5325f, 1.0000f),    // T= 20200K P=5.933e+16   
    Color(0.4174f, 0.5319f, 1.0000f),    // T= 20300K P=5.986e+16   
    Color(0.4167f, 0.5312f, 1.0000f),    // T= 20400K P=6.038e+16   
    Color(0.4160f, 0.5306f, 1.0000f),    // T= 20500K P=6.091e+16   
    Color(0.4153f, 0.5300f, 1.0000f),    // T= 20600K P=6.144e+16   
    Color(0.4146f, 0.5293f, 1.0000f),    // T= 20700K P=6.197e+16   
    Color(0.4139f, 0.5287f, 1.0000f),    // T= 20800K P=6.250e+16   
    Color(0.4133f, 0.5281f, 1.0000f),    // T= 20900K P=6.303e+16   
    Color(0.4126f, 0.5275f, 1.0000f),    // T= 21000K P=6.357e+16   
    Color(0.4119f, 0.5269f, 1.0000f),    // T= 21100K P=6.410e+16   
    Color(0.4113f, 0.5264f, 1.0000f),    // T= 21200K P=6.463e+16   
    Color(0.4107f, 0.5258f, 1.0000f),    // T= 21300K P=6.517e+16   
    Color(0.4100f, 0.5252f, 1.0000f),    // T= 21400K P=6.570e+16   
    Color(0.4094f, 0.5246f, 1.0000f),    // T= 21500K P=6.623e+16   
    Color(0.4088f, 0.5241f, 1.0000f),    // T= 21600K P=6.677e+16   
    Color(0.4082f, 0.5235f, 1.0000f),    // T= 21700K P=6.731e+16   
    Color(0.4076f, 0.5230f, 1.0000f),    // T= 21800K P=6.784e+16   
    Color(0.4070f, 0.5224f, 1.0000f),    // T= 21900K P=6.838e+16   
    Color(0.4064f, 0.5219f, 1.0000f),    // T= 22000K P=6.892e+16   
    Color(0.4059f, 0.5214f, 1.0000f),    // T= 22100K P=6.946e+16   
    Color(0.4053f, 0.5209f, 1.0000f),    // T= 22200K P=7.000e+16   
    Color(0.4047f, 0.5203f, 1.0000f),    // T= 22300K P=7.054e+16   
    Color(0.4042f, 0.5198f, 1.0000f),    // T= 22400K P=7.108e+16   
    Color(0.4036f, 0.5193f, 1.0000f),    // T= 22500K P=7.162e+16   
    Color(0.4031f, 0.5188f, 1.0000f),    // T= 22600K P=7.216e+16   
    Color(0.4026f, 0.5183f, 1.0000f),    // T= 22700K P=7.270e+16   
    Color(0.4020f, 0.5178f, 1.0000f),    // T= 22800K P=7.325e+16   
    Color(0.4015f, 0.5174f, 1.0000f),    // T= 22900K P=7.379e+16   
    Color(0.4010f, 0.5169f, 1.0000f),    // T= 23000K P=7.433e+16   
    Color(0.4005f, 0.5164f, 1.0000f),    // T= 23100K P=7.488e+16   
    Color(0.4000f, 0.5159f, 1.0000f),    // T= 23200K P=7.542e+16   
    Color(0.3995f, 0.5155f, 1.0000f),    // T= 23300K P=7.597e+16   
    Color(0.3990f, 0.5150f, 1.0000f),    // T= 23400K P=7.651e+16   
    Color(0.3985f, 0.5146f, 1.0000f),    // T= 23500K P=7.706e+16   
    Color(0.3980f, 0.5141f, 1.0000f),    // T= 23600K P=7.760e+16   
    Color(0.3975f, 0.5137f, 1.0000f),    // T= 23700K P=7.815e+16   
    Color(0.3970f, 0.5132f, 1.0000f),    // T= 23800K P=7.870e+16   
    Color(0.3966f, 0.5128f, 1.0000f),    // T= 23900K P=7.925e+16   
    Color(0.3961f, 0.5123f, 1.0000f),    // T= 24000K P=7.980e+16   
    Color(0.3956f, 0.5119f, 1.0000f),    // T= 24100K P=8.035e+16   
    Color(0.3952f, 0.5115f, 1.0000f),    // T= 24200K P=8.089e+16   
    Color(0.3947f, 0.5111f, 1.0000f),    // T= 24300K P=8.144e+16   
    Color(0.3943f, 0.5107f, 1.0000f),    // T= 24400K P=8.199e+16   
    Color(0.3938f, 0.5103f, 1.0000f),    // T= 24500K P=8.255e+16   
    Color(0.3934f, 0.5098f, 1.0000f),    // T= 24600K P=8.310e+16   
    Color(0.3930f, 0.5094f, 1.0000f),    // T= 24700K P=8.365e+16   
    Color(0.3925f, 0.5090f, 1.0000f),    // T= 24800K P=8.420e+16   
    Color(0.3921f, 0.5086f, 1.0000f),    // T= 24900K P=8.475e+16   
    Color(0.3917f, 0.5083f, 1.0000f),    // T= 25000K P=8.531e+16   
    Color(0.3913f, 0.5079f, 1.0000f),    // T= 25100K P=8.586e+16   
    Color(0.3909f, 0.5075f, 1.0000f),    // T= 25200K P=8.641e+16   
    Color(0.3905f, 0.5071f, 1.0000f),    // T= 25300K P=8.697e+16   
    Color(0.3901f, 0.5067f, 1.0000f),    // T= 25400K P=8.752e+16   
    Color(0.3897f, 0.5064f, 1.0000f),    // T= 25500K P=8.808e+16   
    Color(0.3893f, 0.5060f, 1.0000f),    // T= 25600K P=8.863e+16   
    Color(0.3889f, 0.5056f, 1.0000f),    // T= 25700K P=8.919e+16   
    Color(0.3885f, 0.5053f, 1.0000f),    // T= 25800K P=8.974e+16   
    Color(0.3881f, 0.5049f, 1.0000f),    // T= 25900K P=9.030e+16   
    Color(0.3877f, 0.5045f, 1.0000f),    // T= 26000K P=9.086e+16   
    Color(0.3874f, 0.5042f, 1.0000f),    // T= 26100K P=9.141e+16   
    Color(0.3870f, 0.5038f, 1.0000f),    // T= 26200K P=9.197e+16   
    Color(0.3866f, 0.5035f, 1.0000f),    // T= 26300K P=9.253e+16   
    Color(0.3863f, 0.5032f, 1.0000f),    // T= 26400K P=9.309e+16   
    Color(0.3859f, 0.5028f, 1.0000f),    // T= 26500K P=9.365e+16   
    Color(0.3855f, 0.5025f, 1.0000f),    // T= 26600K P=9.421e+16   
    Color(0.3852f, 0.5021f, 1.0000f),    // T= 26700K P=9.476e+16   
    Color(0.3848f, 0.5018f, 1.0000f),    // T= 26800K P=9.532e+16   
    Color(0.3845f, 0.5015f, 1.0000f),    // T= 26900K P=9.588e+16   
    Color(0.3841f, 0.5012f, 1.0000f),    // T= 27000K P=9.644e+16   
    Color(0.3838f, 0.5008f, 1.0000f),    // T= 27100K P=9.701e+16   
    Color(0.3835f, 0.5005f, 1.0000f),    // T= 27200K P=9.757e+16   
    Color(0.3831f, 0.5002f, 1.0000f),    // T= 27300K P=9.813e+16   
    Color(0.3828f, 0.4999f, 1.0000f),    // T= 27400K P=9.869e+16   
    Color(0.3825f, 0.4996f, 1.0000f),    // T= 27500K P=9.925e+16   
    Color(0.3821f, 0.4993f, 1.0000f),    // T= 27600K P=9.981e+16   
    Color(0.3818f, 0.4990f, 1.0000f),    // T= 27700K P=1.004e+17   
    Color(0.3815f, 0.4987f, 1.0000f),    // T= 27800K P=1.009e+17   
    Color(0.3812f, 0.4984f, 1.0000f),    // T= 27900K P=1.015e+17   
    Color(0.3809f, 0.4981f, 1.0000f),    // T= 28000K P=1.021e+17   
    Color(0.3805f, 0.4978f, 1.0000f),    // T= 28100K P=1.026e+17   
    Color(0.3802f, 0.4975f, 1.0000f),    // T= 28200K P=1.032e+17   
    Color(0.3799f, 0.4972f, 1.0000f),    // T= 28300K P=1.038e+17   
    Color(0.3796f, 0.4969f, 1.0000f),    // T= 28400K P=1.043e+17   
    Color(0.3793f, 0.4966f, 1.0000f),    // T= 28500K P=1.049e+17   
    Color(0.3790f, 0.4963f, 1.0000f),    // T= 28600K P=1.055e+17   
    Color(0.3787f, 0.4960f, 1.0000f),    // T= 28700K P=1.060e+17   
    Color(0.3784f, 0.4958f, 1.0000f),    // T= 28800K P=1.066e+17   
    Color(0.3781f, 0.4955f, 1.0000f),    // T= 28900K P=1.072e+17   
    Color(0.3779f, 0.4952f, 1.0000f),    // T= 29000K P=1.077e+17   
    Color(0.3776f, 0.4949f, 1.0000f),    // T= 29100K P=1.083e+17   
    Color(0.3773f, 0.4947f, 1.0000f),    // T= 29200K P=1.089e+17   
    Color(0.3770f, 0.4944f, 1.0000f),    // T= 29300K P=1.094e+17   
    Color(0.3767f, 0.4941f, 1.0000f),    // T= 29400K P=1.100e+17   
    Color(0.3764f, 0.4939f, 1.0000f),    // T= 29500K P=1.106e+17   
    Color(0.3762f, 0.4936f, 1.0000f),    // T= 29600K P=1.111e+17   
    Color(0.3759f, 0.4934f, 1.0000f),    // T= 29700K P=1.117e+17   
    Color(0.3756f, 0.4931f, 1.0000f),    // T= 29800K P=1.123e+17   
    Color(0.3754f, 0.4928f, 1.0000f),    // T= 29900K P=1.128e+17   
    Color(0.3751f, 0.4926f, 1.0000f),    // T= 30000K P=1.134e+17   
    Color(0.3748f, 0.4923f, 1.0000f),    // T= 30100K P=1.140e+17   
    Color(0.3746f, 0.4921f, 1.0000f),    // T= 30200K P=1.145e+17   
    Color(0.3743f, 0.4918f, 1.0000f),    // T= 30300K P=1.151e+17   
    Color(0.3741f, 0.4916f, 1.0000f),    // T= 30400K P=1.157e+17   
    Color(0.3738f, 0.4914f, 1.0000f),    // T= 30500K P=1.162e+17   
    Color(0.3735f, 0.4911f, 1.0000f),    // T= 30600K P=1.168e+17   
    Color(0.3733f, 0.4909f, 1.0000f),    // T= 30700K P=1.174e+17   
    Color(0.3730f, 0.4906f, 1.0000f),    // T= 30800K P=1.180e+17   
    Color(0.3728f, 0.4904f, 1.0000f),    // T= 30900K P=1.185e+17   
    Color(0.3726f, 0.4902f, 1.0000f),    // T= 31000K P=1.191e+17   
    Color(0.3723f, 0.4899f, 1.0000f),    // T= 31100K P=1.197e+17   
    Color(0.3721f, 0.4897f, 1.0000f),    // T= 31200K P=1.202e+17   
    Color(0.3718f, 0.4895f, 1.0000f),    // T= 31300K P=1.208e+17   
    Color(0.3716f, 0.4893f, 1.0000f),    // T= 31400K P=1.214e+17   
    Color(0.3714f, 0.4890f, 1.0000f),    // T= 31500K P=1.220e+17   
    Color(0.3711f, 0.4888f, 1.0000f),    // T= 31600K P=1.225e+17   
    Color(0.3709f, 0.4886f, 1.0000f),    // T= 31700K P=1.231e+17   
    Color(0.3707f, 0.4884f, 1.0000f),    // T= 31800K P=1.237e+17   
    Color(0.3704f, 0.4881f, 1.0000f),    // T= 31900K P=1.242e+17   
    Color(0.3702f, 0.4879f, 1.0000f),    // T= 32000K P=1.248e+17   
    Color(0.3700f, 0.4877f, 1.0000f),    // T= 32100K P=1.254e+17   
    Color(0.3698f, 0.4875f, 1.0000f),    // T= 32200K P=1.260e+17   
    Color(0.3695f, 0.4873f, 1.0000f),    // T= 32300K P=1.265e+17   
    Color(0.3693f, 0.4871f, 1.0000f),    // T= 32400K P=1.271e+17   
    Color(0.3691f, 0.4869f, 1.0000f),    // T= 32500K P=1.277e+17   
    Color(0.3689f, 0.4867f, 1.0000f),    // T= 32600K P=1.283e+17   
    Color(0.3687f, 0.4864f, 1.0000f),    // T= 32700K P=1.288e+17   
    Color(0.3684f, 0.4862f, 1.0000f),    // T= 32800K P=1.294e+17   
    Color(0.3682f, 0.4860f, 1.0000f),    // T= 32900K P=1.300e+17   
    Color(0.3680f, 0.4858f, 1.0000f),    // T= 33000K P=1.306e+17   
    Color(0.3678f, 0.4856f, 1.0000f),    // T= 33100K P=1.311e+17   
    Color(0.3676f, 0.4854f, 1.0000f),    // T= 33200K P=1.317e+17   
    Color(0.3674f, 0.4852f, 1.0000f),    // T= 33300K P=1.323e+17   
    Color(0.3672f, 0.4850f, 1.0000f),    // T= 33400K P=1.329e+17   
    Color(0.3670f, 0.4848f, 1.0000f),    // T= 33500K P=1.334e+17   
    Color(0.3668f, 0.4847f, 1.0000f),    // T= 33600K P=1.340e+17   
    Color(0.3666f, 0.4845f, 1.0000f),    // T= 33700K P=1.346e+17   
    Color(0.3664f, 0.4843f, 1.0000f),    // T= 33800K P=1.352e+17   
    Color(0.3662f, 0.4841f, 1.0000f),    // T= 33900K P=1.358e+17   
    Color(0.3660f, 0.4839f, 1.0000f),    // T= 34000K P=1.363e+17   
    Color(0.3658f, 0.4837f, 1.0000f),    // T= 34100K P=1.369e+17   
    Color(0.3656f, 0.4835f, 1.0000f),    // T= 34200K P=1.375e+17   
    Color(0.3654f, 0.4833f, 1.0000f),    // T= 34300K P=1.381e+17   
    Color(0.3652f, 0.4831f, 1.0000f),    // T= 34400K P=1.386e+17   
    Color(0.3650f, 0.4830f, 1.0000f),    // T= 34500K P=1.392e+17   
    Color(0.3649f, 0.4828f, 1.0000f),    // T= 34600K P=1.398e+17   
    Color(0.3647f, 0.4826f, 1.0000f),    // T= 34700K P=1.404e+17   
    Color(0.3645f, 0.4824f, 1.0000f),    // T= 34800K P=1.410e+17   
    Color(0.3643f, 0.4822f, 1.0000f),    // T= 34900K P=1.415e+17   
    Color(0.3641f, 0.4821f, 1.0000f),    // T= 35000K P=1.421e+17   
    Color(0.3639f, 0.4819f, 1.0000f),    // T= 35100K P=1.427e+17   
    Color(0.3638f, 0.4817f, 1.0000f),    // T= 35200K P=1.433e+17   
    Color(0.3636f, 0.4815f, 1.0000f),    // T= 35300K P=1.439e+17   
    Color(0.3634f, 0.4814f, 1.0000f),    // T= 35400K P=1.444e+17   
    Color(0.3632f, 0.4812f, 1.0000f),    // T= 35500K P=1.450e+17   
    Color(0.3630f, 0.4810f, 1.0000f),    // T= 35600K P=1.456e+17   
    Color(0.3629f, 0.4809f, 1.0000f),    // T= 35700K P=1.462e+17   
    Color(0.3627f, 0.4807f, 1.0000f),    // T= 35800K P=1.468e+17   
    Color(0.3625f, 0.4805f, 1.0000f),    // T= 35900K P=1.473e+17   
    Color(0.3624f, 0.4804f, 1.0000f),    // T= 36000K P=1.479e+17   
    Color(0.3622f, 0.4802f, 1.0000f),    // T= 36100K P=1.485e+17   
    Color(0.3620f, 0.4800f, 1.0000f),    // T= 36200K P=1.491e+17   
    Color(0.3619f, 0.4799f, 1.0000f),    // T= 36300K P=1.497e+17   
    Color(0.3617f, 0.4797f, 1.0000f),    // T= 36400K P=1.502e+17   
    Color(0.3615f, 0.4796f, 1.0000f),    // T= 36500K P=1.508e+17   
    Color(0.3614f, 0.4794f, 1.0000f),    // T= 36600K P=1.514e+17   
    Color(0.3612f, 0.4792f, 1.0000f),    // T= 36700K P=1.520e+17   
    Color(0.3610f, 0.4791f, 1.0000f),    // T= 36800K P=1.526e+17   
    Color(0.3609f, 0.4789f, 1.0000f),    // T= 36900K P=1.531e+17   
    Color(0.3607f, 0.4788f, 1.0000f),    // T= 37000K P=1.537e+17   
    Color(0.3605f, 0.4786f, 1.0000f),    // T= 37100K P=1.543e+17   
    Color(0.3604f, 0.4785f, 1.0000f),    // T= 37200K P=1.549e+17   
    Color(0.3602f, 0.4783f, 1.0000f),    // T= 37300K P=1.555e+17   
    Color(0.3601f, 0.4782f, 1.0000f),    // T= 37400K P=1.561e+17   
    Color(0.3599f, 0.4780f, 1.0000f),    // T= 37500K P=1.566e+17   
    Color(0.3598f, 0.4779f, 1.0000f),    // T= 37600K P=1.572e+17   
    Color(0.3596f, 0.4777f, 1.0000f),    // T= 37700K P=1.578e+17   
    Color(0.3595f, 0.4776f, 1.0000f),    // T= 37800K P=1.584e+17   
    Color(0.3593f, 0.4774f, 1.0000f),    // T= 37900K P=1.590e+17   
    Color(0.3592f, 0.4773f, 1.0000f),    // T= 38000K P=1.595e+17   
    Color(0.3590f, 0.4771f, 1.0000f),    // T= 38100K P=1.601e+17   
    Color(0.3589f, 0.4770f, 1.0000f),    // T= 38200K P=1.607e+17   
    Color(0.3587f, 0.4768f, 1.0000f),    // T= 38300K P=1.613e+17   
    Color(0.3586f, 0.4767f, 1.0000f),    // T= 38400K P=1.619e+17   
    Color(0.3584f, 0.4766f, 1.0000f),    // T= 38500K P=1.625e+17   
    Color(0.3583f, 0.4764f, 1.0000f),    // T= 38600K P=1.630e+17   
    Color(0.3581f, 0.4763f, 1.0000f),    // T= 38700K P=1.636e+17   
    Color(0.3580f, 0.4761f, 1.0000f),    // T= 38800K P=1.642e+17   
    Color(0.3579f, 0.4760f, 1.0000f),    // T= 38900K P=1.648e+17   
    Color(0.3577f, 0.4759f, 1.0000f),    // T= 39000K P=1.654e+17   
    Color(0.3576f, 0.4757f, 1.0000f),    // T= 39100K P=1.660e+17   
    Color(0.3574f, 0.4756f, 1.0000f),    // T= 39200K P=1.666e+17   
    Color(0.3573f, 0.4755f, 1.0000f),    // T= 39300K P=1.671e+17   
    Color(0.3572f, 0.4753f, 1.0000f),    // T= 39400K P=1.677e+17   
    Color(0.3570f, 0.4752f, 1.0000f),    // T= 39500K P=1.683e+17   
    Color(0.3569f, 0.4751f, 1.0000f),    // T= 39600K P=1.689e+17   
    Color(0.3567f, 0.4749f, 1.0000f),    // T= 39700K P=1.695e+17   
    Color(0.3566f, 0.4748f, 1.0000f),    // T= 39800K P=1.701e+17   
    Color(0.3565f, 0.4747f, 1.0000f),    // T= 39900K P=1.707e+17   
    Color(0.3563f, 0.4745f, 1.0000f),    // T= 40000K P=1.712e+17   
};


static ColorTemperatureTable* enhanced = NULL;
static ColorTemperatureTable* blackbodyD65 = NULL;

ColorTemperatureTable*
GetStarColorTable(ColorTableType ct)
{
    switch (ct)
    {
    case ColorTable_Enhanced:
        if (enhanced == NULL)
        {
            enhanced = new ColorTemperatureTable(StarColors_Enhanced,
                                                 41, 40000.0f);
        }
        return enhanced;

    case ColorTable_Blackbody_D65:
        if (blackbodyD65 == NULL)
        {
            blackbodyD65 = new ColorTemperatureTable(StarColors_Blackbody_2deg_D65,
                                                     401, 40000.0f);
        }
        return blackbodyD65;

    default:
        return NULL;
    }
}