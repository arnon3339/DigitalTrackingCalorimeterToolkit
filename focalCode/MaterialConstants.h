#ifndef MaterialConstants_h
#define MaterialConstants_h

#include <TObject.h>

const Int_t nPLEnergies = 96;

Float_t kPLFocal[nPLEnergies];
Float_t kWEPLRatio[nPLEnergies];
Float_t kStraggling[nPLEnergies];
Int_t nLayers;

Double_t p, pinv, alpha, alpha_prime;
Double_t p_water, alpha_water, alpha_prime_water, pinv_water;

Float_t kPLEnergies[nPLEnergies] =
			{0.1, 0.11, 0.12, 0.13, 0.14, 0.15, 0.16, 0.17, 0.18, 0.2, 0.225, 0.25,
			 0.275, 0.3, 0.325, 0.35, 0.375, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7,
			 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 2, 2.25, 2.5, 2.75,
			 3, 3.25, 3.5, 3.75, 4, 4.5, 5, 5.5, 6, 6.5, 7, 8, 9, 10, 11, 12, 13, 14,
			 15, 16, 17, 18, 20, 22.5, 25, 27.5, 30, 32.5, 35, 37.5, 40, 45, 50, 55,
			 60, 65, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200,
			 225, 250, 275, 300, 325, 350, 375, 400};

Float_t kPLFocal_W[nPLEnergies] = // Tungsten, in mm
			{0.000387, 0.000425, 0.000464, 0.000503, 0.000543, 0.000584, 0.000625, 0.000666,
			 0.000709, 0.000795, 0.000906, 0.001020, 0.001140, 0.001260, 0.001390, 0.001520,
			 0.001650, 0.001790, 0.002070, 0.002370, 0.002680, 0.003000, 0.003330, 0.003670,
			 0.004400, 0.005160, 0.005960, 0.006800, 0.007670, 0.008560, 0.009490, 0.010450,
			 0.011430, 0.012440, 0.013480, 0.015650, 0.018510, 0.021540, 0.024740, 0.028110,
			 0.031640, 0.035330, 0.039180, 0.043190, 0.051640, 0.060690, 0.070320, 0.080510,
			 0.091250, 0.102540, 0.126680, 0.152880, 0.181090, 0.211250, 0.243330, 0.277280,
			 0.313060, 0.350660, 0.390030, 0.431150, 0.474000, 0.564750, 0.687490, 0.820340,
			 0.963040, 1.120000, 1.280000, 1.450000, 1.630000, 1.820000, 2.220000, 2.660000,
			 3.130000, 3.630000, 4.160000, 4.730000, 5.940000, 7.270000, 8.700000, 10.24000,
			 11.87000, 13.60000, 15.42000, 17.33000, 19.32000, 21.40000, 23.55000, 28.08000,
			 34.14000, 40.61000, 47.45000, 54.64000, 62.16000, 69.97000, 78.07000, 86.42000};

Float_t kWEPLRatio_W[nPLEnergies] = // Tungsten
			{3.697957, 3.669725, 3.620690, 3.575685, 3.552365, 3.546342, 3.521127, 3.511405,
			 3.514467, 3.510759, 3.521749, 3.539216, 3.561404, 3.603175, 3.625899, 3.657895,
			 3.703030, 3.731844, 3.816425, 3.881857, 3.951493, 4.023333, 4.090090, 4.158038,
			 4.261364, 4.364341, 4.454698, 4.523529, 4.577575, 4.628505, 4.671233, 4.711962,
			 4.755906, 4.797428, 4.837537, 4.915016, 5.011885, 5.106778, 5.197251, 5.283173,
			 5.365676, 5.444098, 5.518377, 5.588099, 5.720178, 5.839348, 5.947952, 6.048069,
			 6.140493, 6.225668, 6.378907, 6.513736, 6.626539, 6.721893, 6.822011, 6.924409,
			 6.995464, 7.072378, 7.153296, 7.213267, 7.278481, 7.383798, 7.505564, 7.606602,
			 7.704768, 7.758929, 7.843750, 7.917241, 7.981595, 8.032967, 8.153153, 8.229323,
			 8.309904, 8.382920, 8.449519, 8.490486, 8.590909, 8.665750, 8.739080, 8.794922,
			 8.851727, 8.897794, 8.940337, 8.977496, 9.012940, 9.042056, 9.072611, 9.123575,
			 9.177504, 9.223098, 9.264278, 9.299780, 9.330277, 9.358725, 9.382862, 9.405809};

Float_t kStraggling_W[nPLEnergies] = // Tungsten, in mm
			{0.000152, 0.000159, 0.000165, 0.000172, 0.000178, 0.000184, 0.000190, 0.000196,
			 0.000202, 0.000214, 0.000228, 0.000242, 0.000256, 0.000271, 0.000285, 0.000299, 
			 0.000313, 0.000328, 0.000358, 0.000388, 0.000419, 0.000450, 0.000481, 0.000513, 
			 0.000581, 0.000651, 0.000722, 0.000793, 0.000865, 0.000937, 0.001010, 0.001080, 
			 0.001160, 0.001230, 0.001310, 0.001480, 0.001700, 0.001920, 0.002140, 0.002370, 
			 0.002610, 0.002850, 0.003090, 0.003340, 0.003940, 0.004540, 0.005160, 0.005790, 
			 0.006440, 0.007100, 0.008780, 0.010470, 0.012200, 0.013970, 0.015790, 0.017660, 
			 0.019570, 0.021550, 0.023570, 0.025640, 0.027770, 0.033370, 0.041120, 0.048900, 
			 0.056800, 0.064880, 0.073150, 0.081640, 0.090340, 0.099270, 0.124220, 0.149000, 
			 0.174000, 0.199420, 0.225360, 0.251860, 0.328800, 0.404000, 0.479200, 0.555180, 
			 0.632290, 0.710680, 0.790430, 0.871530, 0.953960, 1.040000, 1.120000, 1.370000, 
			 1.710000, 2.040000, 2.360000, 2.680000, 2.990000, 3.300000, 3.610000, 3.920000};

Float_t kPLFocal_Al[nPLEnergies] = // Aluminium, in mm
			{0.000885, 0.000969, 0.001060, 0.001140, 0.001230, 0.001330, 0.001420, 0.001520,
			 0.001610, 0.001810, 0.002080, 0.002350, 0.002630, 0.002930, 0.003240, 0.003560,
			 0.003890, 0.004220, 0.004930, 0.005680, 0.006470, 0.007290, 0.008150, 0.009050,
			 0.010930, 0.012940, 0.015070, 0.017320, 0.019680, 0.022170, 0.024770, 0.027480,
			 0.030310, 0.033240, 0.036300, 0.042730, 0.051400, 0.060760, 0.070800, 0.081510,
			 0.092870, 0.104880, 0.117530, 0.130810, 0.159200, 0.190030, 0.223240, 0.258790,
			 0.296640, 0.336760, 0.423600, 0.519180, 0.623300, 0.735800, 0.856540, 0.985370,
			 1.120000, 1.270000, 1.420000, 1.580000, 1.750000, 2.100000, 2.590000, 3.130000,
			 3.700000, 4.320000, 4.980000, 5.690000, 6.430000, 7.220000, 8.900000, 10.74000,
			 12.72000, 14.86000, 17.13000, 19.54000, 24.76000, 30.49000, 36.72000, 43.43000,
			 50.59000, 58.18000, 66.20000, 74.63000, 83.45000, 92.65000, 102.2100, 122.3900,
			 149.4500, 178.4300, 209.1800, 241.5700, 275.4800, 310.8100, 347.4500, 385.3200};

Float_t kWEPLRatio_Al[nPLEnergies] = // Aluminium
			{1.616367, 1.609243, 1.584906, 1.578947, 1.569106, 1.556391, 1.549296, 1.539474,
			 1.546584, 1.541436, 1.533654, 1.536170, 1.543726, 1.549488, 1.555556, 1.561798,
			 1.570694, 1.582938, 1.602434, 1.619718, 1.636785, 1.655693, 1.671166, 1.686188,
			 1.715462, 1.740340, 1.761778, 1.775982, 1.784045, 1.787100, 1.789665, 1.791849,
			 1.793468, 1.795427, 1.796419, 1.800140, 1.804864, 1.810402, 1.816102, 1.821985,
			 1.828039, 1.833905, 1.839615, 1.845042, 1.855465, 1.864916, 1.873589, 1.881564,
			 1.888889, 1.895653, 1.907649, 1.918063, 1.925237, 1.929872, 1.938030, 1.948507,
			 1.955357, 1.952756, 1.964789, 1.968354, 1.971429, 1.985714, 1.992278, 1.993610,
			 2.005405, 2.011574, 2.016064, 2.017575, 2.023328, 2.024931, 2.033708, 2.038175,
			 2.044811, 2.047779, 2.051956, 2.055271, 2.060985, 2.066251, 2.070534, 2.073682,
			 2.076893, 2.079924, 2.082477, 2.084684, 2.086639, 2.088505, 2.090402, 2.093227,
			 2.096487, 2.099143, 2.101492, 2.103490, 2.105307, 2.106850, 2.108275, 2.109545};

Float_t kStraggling_Al[nPLEnergies] = // Aluminum, in mm
			{0.000105, 0.000109, 0.000112, 0.000115, 0.000119, 0.000122, 0.000125, 0.000129, 
			 0.000132, 0.000140, 0.000151, 0.000162, 0.000174, 0.000185, 0.000196, 0.000208, 
			 0.000220, 0.000232, 0.000265, 0.000299, 0.000332, 0.000365, 0.000399, 0.000432, 
			 0.000533, 0.000630, 0.000724, 0.000817, 0.000910, 0.001000, 0.001100, 0.001190, 
			 0.001290, 0.001390, 0.001490, 0.001800, 0.002260, 0.002690, 0.003130, 0.003560, 
			 0.003990, 0.004430, 0.004880, 0.005330, 0.006870, 0.008330, 0.009770, 0.011210, 
			 0.012660, 0.014130, 0.019170, 0.023940, 0.028620, 0.033310, 0.038030, 0.042820, 
			 0.047690, 0.052640, 0.057680, 0.062820, 0.068040, 0.086450, 0.112690, 0.137760, 
			 0.162460, 0.187140, 0.211990, 0.237110, 0.262570, 0.288400, 0.380250, 0.467130, 
			 0.552140, 0.636640, 0.721330, 0.806580, 1.110000, 1.390000, 1.660000, 1.930000, 
			 2.200000, 2.470000, 2.750000, 3.020000, 3.290000, 3.570000, 3.850000, 4.850000, 
			 6.240000, 7.540000, 8.770000, 9.970000, 11.15000, 12.30000, 13.43000, 14.55000};

Float_t kPLFocal_PMMA[nPLEnergies] = // PMMA
			{0.001380, 0.001500, 0.001620, 0.001750, 0.001880, 0.002010, 0.002150, 0.002290,
			 0.002430, 0.002730, 0.003130, 0.003550, 0.003990, 0.004460, 0.004950, 0.005460,
			 0.005990, 0.006550, 0.007720, 0.008980, 0.010320, 0.011740, 0.013230, 0.014790,
			 0.018130, 0.021730, 0.025580, 0.029630, 0.033860, 0.038300, 0.042940, 0.047800,
			 0.052870, 0.058160, 0.063650, 0.075280, 0.091030, 0.108110, 0.126520, 0.146220,
			 0.167220, 0.189480, 0.212990, 0.237740, 0.290850, 0.348760, 0.411390, 0.478640,
			 0.550460, 0.626780, 0.792530, 0.975700, 1.180000, 1.390000, 1.630000, 1.880000,
			 2.140000, 2.420000, 2.720000, 3.030000, 3.360000, 4.060000, 5.020000, 6.070000,
			 7.210000, 8.430000, 9.740000, 11.13000, 12.61000, 14.17000, 17.52000, 21.18000,
			 25.15000, 29.41000, 33.96000, 38.79000, 49.26000, 60.78000, 73.32000, 86.82000,
			 101.2600, 116.6000, 132.8000, 149.8400, 167.6800, 186.3000, 205.6800, 246.5600,
			 301.4800, 360.3400, 422.8500, 488.7500, 557.8000, 629.7800, 704.4900, 781.7500};

Float_t kWEPLRatio_PMMA[nPLEnergies] = // PMMA
			{1.036232, 1.040000, 1.037037, 1.028571, 1.026596, 1.029851, 1.023256, 1.021834,
			 1.024691, 1.021978, 1.019169, 1.016901, 1.017544, 1.017937, 1.018182, 1.018315,
			 1.020033, 1.019847, 1.023316, 1.024499, 1.026163, 1.028109, 1.029478, 1.031778,
			 1.034197, 1.036355, 1.037920, 1.038137, 1.036917, 1.034465, 1.032371, 1.030126,
			 1.028182, 1.026135, 1.024509, 1.021785, 1.019115, 1.017482, 1.016282, 1.015661,
			 1.015249, 1.015094, 1.015118, 1.015185, 1.015609, 1.016143, 1.016699, 1.017320,
			 1.017912, 1.018507, 1.019621, 1.020621, 1.016949, 1.021583, 1.018405, 1.021277,
			 1.023364, 1.024793, 1.025735, 1.026403, 1.026786, 1.027094, 1.027888, 1.028007,
			 1.029126, 1.030842, 1.030801, 1.031447, 1.031721, 1.031757, 1.033105, 1.033522,
			 1.034195, 1.034682, 1.035041, 1.035318, 1.035932, 1.036525, 1.036961, 1.037319,
			 1.037626, 1.037822, 1.038102, 1.038308, 1.038466, 1.038647, 1.038798, 1.039057,
			 1.039273, 1.039435, 1.039589, 1.039673, 1.039745, 1.039776, 1.039788, 1.039783};

Float_t kStraggling_PMMA[nPLEnergies] = // PMMA, in mm
			{0.000121, 0.000124, 0.000127, 0.000131, 0.000134, 0.000138, 0.000141, 0.000144, 
			 0.000148, 0.000158, 0.000173, 0.000188, 0.000203, 0.000219, 0.000236, 0.000252, 
			 0.000269, 0.000287, 0.000343, 0.000398, 0.000453, 0.000507, 0.000562, 0.000617, 
			 0.000800, 0.000973, 0.001140, 0.001300, 0.001460, 0.001610, 0.001770, 0.001930, 
			 0.002090, 0.002250, 0.002410, 0.002980, 0.003800, 0.004580, 0.005350, 0.006120, 
			 0.006890, 0.007670, 0.008470, 0.009270, 0.012130, 0.014850, 0.017510, 0.020170, 
			 0.022840, 0.025530, 0.035160, 0.044200, 0.053060, 0.061920, 0.070850, 0.079890, 
			 0.089080, 0.098430, 0.107930, 0.117610, 0.127460, 0.163360, 0.214650, 0.263470, 
			 0.311460, 0.359360, 0.407540, 0.456200, 0.505480, 0.555420, 0.737600, 0.909200, 
			 1.080000, 1.240000, 1.410000, 1.580000, 2.180000, 2.740000, 3.290000, 3.830000, 
			 4.360000, 4.900000, 5.440000, 5.980000, 6.530000, 7.070000, 7.620000, 9.640000, 
			 12.46000, 15.07000, 17.56000, 19.98000, 22.34000, 24.65000, 26.93000, 29.17000};

// THESE VALUES WERE CALCULATED USING THE OLD MATERIAL CONSTANTS

//const Int_t nPLEnergies = 29;
//Int_t kPLEnergies[nPLEnergies]
//	= {1, 3, 5, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130,
//	   140, 150, 160, 170, 180, 190, 200, 225, 250, 275, 300, 350, 400};

// Float_t kPLFocal[nPLEnergies] // Tungsten
// 	= {0.0358, 0.0560, 0.0860, 0.1964, 0.5536, 1.0740, 1.7440, 2.5480, 3.4590, 4.5150, 5.6860,
// 		6.9670, 8.3520, 9.8390, 11.441, 13.117, 14.880, 16.729, 18.660, 20.670, 22.758, 24.919,
// 		27.147, 33.023, 39.294, 45.930, 52.901, 67.750, 83.668};
// 
// Float_t kWEPLRatio[nPLEnergies] // Tungsten
// 	= {0.7430, 2.6589, 4.1628, 6.2062, 7.6553, 8.2123, 8.5161, 8.7253, 8.9306, 9.0286, 9.1094,
// 	   9.1771, 9.2364, 9.2863, 9.3151, 9.3567, 9.3947, 9.4289, 9.4602, 9.4891, 9.5150, 9.5393,
// 	   9.5634, 9.3139, 9.6572, 9.6949, 9.7285, 9.7862, 9.8340};


// Float_t kPLFocal[nPLEnergies] // Aluminum
// 	= {0.0234, 0.0090, 0.2000, 0.6440, 2.1698, 4.4619, 7.4556, 11.104, 15.371, 20.224, 25.637,
// 		31.583, 38.040, 44.989, 52.408, 60.280, 68.583, 77.313, 86.449, 95.796, 105.88, 116.15,
// 		126.78, 154.81, 184.81, 216.63, 250.13, 321.72,	398.70};
//
// Float_t kWEPLRatio[nPLEnergies] // Aluminum
// 	= {1.137, 1.654, 1.790, 1.892, 1.953, 1.977, 1.992, 2.002, 2.009, 2.016, 2.020, 2.024, 2.028,
// 		2.031, 2.034, 2.036, 2.038, 2.040, 2.042, 2.047, 2.045, 2.047, 2.048, 2.051, 2.053, 2.056,
// 		2.057, 2.061, 2.064};

// const Float_t kPLFocal[nPLEnergies] // PMMA
// 	= {0.0247, 0.1270, 0.3010, 1.0145, 3.5084, 7.2895, 12.255, 18.327, 25.448, 33.564, 42.630, 52.605,
// 		63.450, 75.132, 87.618,	100.877, 114.882,	129.604,	145.022,	161.110,	177.846,	195.207,	213.174,
// 		260.614,	311.435,	365.383,	422.227,	543.793,	674.678};
//
// const Float_t kWEPLRatio[nPLEnergies] // PMMA
// 	= {1.0769, 1.1727, 1.1894,	1.2015, 1.2080, 1.2100,	1.2120, 1.2131, 1.2139,	1.2145, 1.2150, 1.2154,
// 		1.2158, 1.2161, 1.2164, 1.2166, 1.2168, 1.2171, 1.2173, 1.2174, 1.2176, 1.2177, 1.2179, 1.2182,
// 		1.2184, 1.2187, 1.2189, 1.2192, 1.2195};

#endif
