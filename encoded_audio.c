const char encoded_audio[] = {
	0x24, 0x92, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6a, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x5a, 0xaa,
	0xaa, 0x69, 0x76, 0x1d, 0x76, 0x08, 0x21, 0x86, 0x28, 0xa0, 0x82, 0x18, 0x60, 0x82, 0x38, 0xe3,
	0x8e, 0x38, 0xe3, 0x8e, 0x68, 0xe6, 0x8e, 0x69, 0xa7, 0x9e, 0x69, 0xa5, 0x96, 0xaa, 0x61, 0xec,
	0x15, 0x06, 0xe9, 0xe7, 0xbc, 0x5d, 0xfe, 0xd7, 0xc5, 0xac, 0x5a, 0x8b, 0xa8, 0xb9, 0x2e, 0x4b,
	0x95, 0xb1, 0x6c, 0x48, 0x12, 0x09, 0x7a, 0x5e, 0x32, 0x9b, 0x25, 0xc2, 0xe3, 0x8d, 0xc6, 0x44,
	0x8a, 0x57, 0xce, 0x71, 0xce, 0xc6, 0x11, 0xab, 0x58, 0x3d, 0x9b, 0xcb, 0xd7, 0xbb, 0x24, 0x73,
	0x49, 0x24, 0xc8, 0x90, 0x89, 0x13, 0x17, 0x31, 0x46, 0xe9, 0xba, 0xd0, 0xb5, 0x48, 0x92, 0x24,
	0xd9, 0x36, 0x4a, 0x9c, 0x2d, 0xb0, 0x98, 0x2d, 0x96, 0xeb, 0xd7, 0x8d, 0x06, 0xb5, 0xb5, 0x9a,
	0xd6, 0x32, 0x30, 0x22, 0x74, 0x0a, 0x04, 0x85, 0x5f, 0x90, 0x97, 0xe3, 0x25, 0x8d, 0x99, 0x15,
	0x98, 0x59, 0x88, 0x6d, 0x1b, 0x53, 0x84, 0xbd, 0xe2, 0x78, 0x91, 0x24, 0x25, 0x1a, 0x6d, 0x57,
	0x2b, 0xae, 0x27, 0x13, 0xe7, 0xc0, 0x83, 0xb1, 0x83, 0x1a, 0x52, 0xe7, 0x35, 0xa8, 0x9f, 0x08,
	0x52, 0xec, 0xc5, 0xd8, 0x43, 0x7e, 0x10, 0xb3, 0xe3, 0x3e, 0x73, 0x57, 0x35, 0x4b, 0x72, 0x92,
	0x40, 0x90, 0x21, 0x88, 0xaa, 0xfa, 0xba, 0x24, 0xae, 0x2b, 0xad, 0xd5, 0xb4, 0xda, 0xaf, 0x5e,
	0xb5, 0x67, 0x3b, 0x36, 0x39, 0xda, 0xd3, 0x9d, 0xe5, 0x64, 0x6d, 0xe5, 0x27, 0x5e, 0x88, 0x57,
	0xa2, 0x27, 0x22, 0x72, 0x2c, 0x94, 0xc9, 0x46, 0xad, 0xab, 0x30, 0xcc, 0x37, 0x3d, 0xcf, 0x49,
	0x12, 0x46, 0xf1, 0xb7, 0x5a, 0xad, 0x23, 0x91, 0xd7, 0x62, 0x5e, 0xbc, 0xf7, 0xda, 0xd0, 0x83,
	0x5a, 0xa6, 0xdc, 0xc1, 0x7a, 0x75, 0x19, 0xf4, 0x39, 0x74, 0xee, 0x58, 0x72, 0xa7, 0x0b, 0x7b,
	0x17, 0xaf, 0x1a, 0x50, 0xa3, 0xd0, 0xf4, 0x89, 0x22, 0x51, 0x3b, 0xad, 0x03, 0xc5, 0x12, 0x69,
	0x32, 0xa9, 0x56, 0xed, 0x83, 0x87, 0x00, 0x06, 0xb5, 0x4a, 0x73, 0x90, 0x7b, 0x55, 0x0e, 0xcc,
	0x98, 0xa0, 0xc8, 0x67, 0x32, 0x2a, 0x06, 0xa4, 0x6a, 0x68, 0xe2, 0x8a, 0x5f, 0x37, 0xcd, 0x2f,
	0x4b, 0xe2, 0x47, 0x49, 0x17, 0x45, 0xd1, 0xd8, 0xd2, 0x81, 0x40, 0xeb, 0x75, 0x9b, 0x37, 0x36,
	0x6b, 0x5a, 0xc6, 0x31, 0x8d, 0x6a, 0x0b, 0x54, 0x38, 0xd9, 0x46, 0xcd, 0xaf, 0x00, 0x8b, 0x40,
	0x24, 0x2d, 0x42, 0xd4, 0xa3, 0xca, 0x3c, 0x1d, 0x07, 0x25, 0x89, 0x64, 0xd1, 0x34, 0xb9, 0xce,
	0x70, 0xf2, 0xd8, 0x58, 0xac, 0x64, 0xd2, 0x66, 0xed, 0xf5, 0xeb, 0x73, 0xa3, 0x16, 0x31, 0xad,
	0x73, 0x93, 0x9d, 0xd0, 0x74, 0x66, 0xc8, 0x22, 0xda, 0x18, 0xf4, 0x77, 0x37, 0x74, 0xd4, 0x4c,
	0x44, 0x81, 0x60, 0x55, 0xd1, 0x74, 0x42, 0x10, 0x84, 0xb5, 0x2d, 0x85, 0xdb, 0x95, 0xaa, 0xd4,
	0x8e, 0x47, 0x02, 0x03, 0xa7, 0x51, 0x89, 0x09, 0x6b, 0x31, 0x85, 0x2f, 0x1b, 0xf3, 0xfd, 0xe5,
	0xa6, 0x64, 0x0f, 0x17, 0x03, 0xe6, 0x04, 0x62, 0x49, 0x22, 0x92, 0x31, 0x14, 0x44, 0x95, 0x25,
	0x4a, 0x72, 0x9e, 0x63, 0x98, 0xf6, 0x5b, 0xba, 0xc7, 0x63, 0x76, 0x3b, 0x21, 0xc3, 0x81, 0x03,
	0x39, 0x73, 0x6d, 0x56, 0x31, 0x4a, 0x97, 0x51, 0x3c, 0xbb, 0xa9, 0x30, 0xb9, 0x6b, 0xec, 0x51,
	0x1e, 0x91, 0xe9, 0xa5, 0x9a, 0x59, 0x69, 0x5a, 0x8f, 0xe3, 0xfa, 0x20, 0x88, 0x1a, 0xb6, 0xad,
	0x00, 0x65, 0x97, 0x4b, 0xac, 0x46, 0x23, 0x97, 0x30, 0xe1, 0xda, 0xc6, 0x33, 0x5b, 0x08, 0x18,
	0xc3, 0x94, 0x34, 0x04, 0x89, 0x80, 0xcc, 0xce, 0x3b, 0x54, 0x39, 0x1b, 0x91, 0x1a, 0x61, 0xae,
	0x50, 0x53, 0xca, 0xda, 0xb6, 0xc2, 0xf0, 0xba, 0xd6, 0xb5, 0xb8, 0xce, 0x45, 0x0a, 0x85, 0xb8,
	0xdc, 0x10, 0x22, 0xe5, 0xc8, 0xc5, 0x4a, 0x6b, 0x58, 0xcb, 0x36, 0x00, 0xff, 0xfc, 0xa4, 0x00,
	0xdd, 0xb9, 0x76, 0x44, 0x44, 0x55, 0x55, 0x44, 0x44, 0x43, 0x33, 0x33, 0x22, 0x25, 0x22, 0x49,
	0x24, 0x92, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0xaa, 0xaa, 0xfa, 0xaa, 0xaa, 0xaa, 0xfa,
	0xaa, 0x6d, 0x76, 0x9c, 0x5d, 0xa7, 0xdd, 0x7d, 0xd7, 0xdf, 0x86, 0x17, 0xe0, 0x82, 0x18, 0x23,
	0x82, 0x38, 0xa2, 0x92, 0x59, 0x24, 0x92, 0x49, 0xa7, 0x96, 0x59, 0xa6, 0x92, 0x79, 0x27, 0x9a,
	0x6a, 0x28, 0xa6, 0x94, 0x04, 0xf7, 0x92, 0x67, 0x1c, 0xd1, 0xba, 0x9b, 0x73, 0x7e, 0x16, 0xdd,
	0x36, 0xb5, 0x6b, 0x52, 0x35, 0x23, 0x5a, 0x4a, 0x92, 0xa4, 0xc9, 0x34, 0xdc, 0x6d, 0x84, 0xc2,
	0x13, 0xc9, 0xe8, 0x30, 0x58, 0xc2, 0xe5, 0xe7, 0x36, 0xb6, 0xb5, 0x73, 0x9e, 0xfb, 0x0c, 0xf5,
	0x5b, 0xfd, 0xd4, 0x29, 0x07, 0x52, 0x0e, 0xa4, 0xc5, 0x49, 0x8a, 0x19, 0x21, 0x93, 0x3c, 0xb3,
	0xcb, 0x24, 0xc9, 0x29, 0xea, 0x7a, 0x39, 0x1a, 0x90, 0x48, 0x0a, 0x65, 0x34, 0x89, 0x0a, 0x5a,
	0xf5, 0xed, 0x92, 0x11, 0xad, 0x39, 0xdc, 0xe1, 0x44, 0x04, 0xf0, 0x07, 0x92, 0x52, 0x9e, 0xad,
	0x7d, 0x18, 0x2a, 0x10, 0x50, 0xbb, 0x8b, 0xbb, 0x55, 0xb5, 0x6a, 0x26, 0x89, 0x2b, 0xe8, 0x71,
	0xca, 0xe9, 0x65, 0xb0, 0xe0, 0xb0, 0x5b, 0x76, 0xdc, 0xea, 0xb5, 0xb1, 0x88, 0xc7, 0x39, 0x63,
	0x29, 0x48, 0xf8, 0xd2, 0xa8, 0xf3, 0x8b, 0x45, 0x7d, 0x8a, 0xfd, 0x8b, 0xd6, 0xf7, 0xb2, 0x65,
	0xa6, 0x5b, 0x3b, 0x33, 0xb2, 0xd8, 0xb5, 0xaf, 0xeb, 0xfa, 0x8c, 0x43, 0x8c, 0xc6, 0x51, 0x28,
	0xa7, 0xef, 0xe1, 0x09, 0x73, 0x1a, 0xd6, 0xb5, 0x4a, 0xb5, 0x86, 0x34, 0xf4, 0x10, 0xc5, 0x48,
	0xc3, 0xcd, 0x58, 0x92, 0xb0, 0xe7, 0x8d, 0xcf, 0x1a, 0x2c, 0x22, 0x43, 0xeb, 0x3f, 0x32, 0xd8,
	0xb6, 0x2c, 0xab, 0x2a, 0x34, 0x9b, 0x6a, 0x35, 0x1d, 0x0e, 0x0b, 0xb7, 0x48, 0x48, 0xf0, 0xaf,
	0x72, 0x11, 0x4a, 0x84, 0x16, 0xb1, 0xb0, 0xd3, 0x71, 0xa1, 0x8d, 0xa1, 0x33, 0x3a, 0x66, 0xc8,
	0x31, 0x70, 0x63, 0x62, 0x36, 0x24, 0x44, 0xc4, 0x52, 0xd6, 0xb5, 0x1e, 0xc7, 0xb0, 0xe0, 0xd1,
	0x2d, 0x84, 0xe3, 0x71, 0xb7, 0x8f, 0x16, 0xb4, 0x28, 0x4e, 0x72, 0x11, 0xce, 0x6b, 0x44, 0x28,
	0x5a, 0x98, 0x88, 0x14, 0x20, 0x22, 0x31, 0x44, 0xa3, 0x03, 0x7a, 0x26, 0xf4, 0xca, 0xcc, 0xaa,
	0xb5, 0x2b, 0x5a, 0xca, 0x8a, 0x34, 0x6d, 0x1b, 0x56, 0xcc, 0x46, 0x91, 0x54, 0x8a, 0x47, 0x4f,
	0xe1, 0x0d, 0x79, 0x9a, 0xd8, 0x41, 0x2c, 0x6b, 0x54, 0xd6, 0xf7, 0x17, 0xd6, 0xad, 0x9e, 0x31,
	0x73, 0x62, 0xe9, 0x47, 0x52, 0x8e, 0xa5, 0x55, 0xd5, 0x5c, 0x49, 0xc4, 0x93, 0xae, 0xeb, 0xaf,
	0x0b, 0xc2, 0x58, 0xaa, 0x4d, 0x26, 0x5c, 0x6e, 0x37, 0x2e, 0x4a, 0x58, 0x70, 0xd4, 0xa3, 0x9e,
	0xd6, 0xce, 0x6d, 0x6a, 0x69, 0xd9, 0xea, 0x12, 0xa4, 0xca, 0xf4, 0x96, 0x28, 0x99, 0xdd, 0x32,
	0xbf, 0x0c, 0xf0, 0xcd, 0x4b, 0x55, 0x2a, 0xd8, 0x8d, 0xaf, 0xab, 0xe8, 0xaf, 0x01, 0x2b, 0x15,
	0x92, 0x49, 0xa8, 0x91, 0x14, 0xa8, 0x70, 0xda, 0xd7, 0x39, 0xef, 0xc6, 0x1a, 0xd5, 0x41, 0x22,
	0x34, 0x60, 0x87, 0x24, 0x34, 0x48, 0x6b, 0x37, 0xc2, 0x6f, 0x7b, 0x93, 0xb9, 0x39, 0xcb, 0x15,
	0x32, 0xca, 0xae, 0x18, 0x66, 0x13, 0x7a, 0xdc, 0x05, 0x00, 0x9c, 0xae, 0x54, 0x89, 0x08, 0x1a,
	0x54, 0x98, 0xd6, 0x31, 0x8c, 0x4a, 0x9a, 0xd8, 0x27, 0x7e, 0x67, 0x4c, 0x33, 0xbb, 0x10, 0x76,
	0x1e, 0xec, 0x3d, 0xd8, 0x85, 0x34, 0xd3, 0x4a, 0xcc, 0x24, 0xc3, 0x48, 0xd2, 0x4c, 0x13, 0x02,
	0xb4, 0xd3, 0x6d, 0xa6, 0xea, 0xd5, 0x6a, 0x74, 0xad, 0x31, 0xa3, 0x73, 0x9d, 0x6a, 0x10, 0x73,
	0xa9, 0x3a, 0xb5, 0xca, 0x09, 0x69, 0xa4, 0x1d, 0xcf, 0x3b, 0x9f, 0x35, 0x32, 0x6a, 0x63, 0xf6,
	0xbf, 0x64, 0x2c, 0x42, 0xc2, 0xda, 0xb6, 0x98, 0x66, 0x1a, 0xb4, 0xd3, 0x50, 0xa8, 0x6b, 0x55,
	0xa4, 0xa9, 0x5b, 0x05, 0x4a, 0x9a, 0xdb, 0x5a, 0x10, 0x73, 0x9a, 0xd4, 0xff, 0xfc, 0xa4, 0x00,
	0x92, 0x09, 0x66, 0x55, 0x44, 0x66, 0x55, 0x44, 0x33, 0x33, 0x33, 0x32, 0x33, 0x49, 0x22, 0x49,
	0x24, 0x90, 0x00, 0x00, 0xff, 0xfc, 0xa4, 0x00, 0x92, 0x09, 0x66, 0x55, 0x44, 0x66, 0x55, 0x44,
	0x33, 0x33, 0x33, 0x32, 0x33, 0x49, 0x22, 0x49, 0x24, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xaa, 0xaa, 0x5a, 0xfa, 0xaa, 0xaa, 0xa5, 0x1a, 0xa6, 0x59, 0x71, 0xc8, 0x61, 0x86, 0x18, 0xa1,
	0x8a, 0x18, 0xa2, 0x9a, 0x39, 0xa3, 0x92, 0x48, 0xe3, 0x9a, 0x69, 0x24, 0x9a, 0x69, 0xa6, 0xa6,
	0x7a, 0x67, 0x9e, 0xa9, 0xa8, 0x9a, 0x8a, 0x27, 0x9f, 0x4b, 0x86, 0x39, 0x5c, 0x2d, 0xc1, 0xf9,
	0xf0, 0x7a, 0x87, 0x92, 0x6f, 0x24, 0x92, 0x25, 0xa4, 0x4b, 0x39, 0xa3, 0x8a, 0x34, 0xcd, 0x37,
	0x83, 0xc1, 0xb4, 0xda, 0x4d, 0x97, 0x16, 0x91, 0xe3, 0x71, 0xb4, 0x89, 0x2b, 0x56, 0xb5, 0xa3,
	0x18, 0x66, 0x0d, 0xbf, 0x05, 0xd5, 0xc8, 0x4d, 0xa1, 0x95, 0x58, 0x64, 0x51, 0x03, 0x22, 0x46,
	0x47, 0x41, 0x6e, 0x82, 0xde, 0x05, 0xe0, 0x5e, 0x77, 0x9e, 0x97, 0x4b, 0x35, 0x9a, 0xda, 0x2d,
	0x19, 0x25, 0xd4, 0xca, 0x65, 0x2a, 0x54, 0x89, 0x06, 0x38, 0x41, 0xce, 0x6b, 0x50, 0x88, 0x64,
	0x74, 0x0a, 0xc6, 0xce, 0x79, 0xa3, 0x9e, 0x38, 0x4a, 0x70, 0x95, 0xc2, 0x5b, 0x84, 0xba, 0x6c,
	0xa6, 0xc5, 0xd9, 0x76, 0x25, 0x92, 0xd2, 0x49, 0x27, 0x13, 0x8a, 0x2d, 0xad, 0x26, 0x93, 0x40,
	0x81, 0x4a, 0x91, 0x8c, 0x21, 0x73, 0x94, 0xaa, 0x0b, 0x9c, 0x4e, 0x5e, 0xe5, 0xe8, 0xda, 0x7e,
	0x26, 0xba, 0xa4, 0x75, 0x48, 0xab, 0x59, 0x56, 0x32, 0x45, 0x28, 0x51, 0x6f, 0x5b, 0xca, 0x05,
	0x04, 0xca, 0x65, 0x14, 0x8a, 0x96, 0xf6, 0x82, 0x41, 0x22, 0x44, 0x22, 0x47, 0x18, 0x8c, 0x54,
	0xa8, 0x42, 0x96, 0xcc, 0xf4, 0xf7, 0x6c, 0x8d, 0x76, 0xe2, 0x59, 0xbb, 0xdd, 0x77, 0xc3, 0x1b,
	0xaa, 0xb7, 0x56, 0x8a, 0xb8, 0xab, 0x34, 0xcd, 0x39, 0x63, 0xb1, 0x28, 0x94, 0x51, 0x28, 0xb4,
	0x71, 0x69, 0x94, 0xca, 0xf5, 0xe1, 0xc3, 0x6b, 0x56, 0xb6, 0xb5, 0x8c, 0x4e, 0x60, 0xd2, 0xd3,
	0x66, 0x53, 0xe6, 0x65, 0x3a, 0x99, 0x4b, 0xe2, 0x95, 0xb8, 0x9e, 0xd1, 0x3d, 0x99, 0xd5, 0x9d,
	0x4c, 0xa4, 0x92, 0x05, 0x02, 0x39, 0x9c, 0xd9, 0x6c, 0xbb, 0x52, 0xb2, 0x91, 0x49, 0x9b, 0x36,
	0xa7, 0x14, 0xab, 0x5a, 0xf7, 0x9c, 0xd0, 0xc4, 0x86, 0x79, 0xfc, 0x39, 0xa5, 0x42, 0x69, 0x11,
	0x8f, 0x39, 0x1d, 0xf6, 0x81, 0x45, 0x00, 0x87, 0x86, 0x78, 0x67, 0x11, 0xc4, 0x72, 0x39, 0x1a,
	0x4d, 0x24, 0xa2, 0x50, 0xc4, 0x8d, 0x46, 0xa3, 0x48, 0xf5, 0x32, 0x6d, 0x6a, 0x30, 0x73, 0x9c,
	0xe6, 0x6f, 0x9c, 0xb4, 0x7c, 0xea, 0x86, 0x22, 0xa5, 0x88, 0xa1, 0x18, 0xc2, 0x51, 0xc4, 0x1d,
	0x88, 0x3e, 0xd2, 0x69, 0x24, 0x89, 0x36, 0x93, 0x69, 0xb4, 0xea, 0x75, 0xc6, 0xe3, 0x6d, 0x25,
	0x6d, 0xb6, 0xdd, 0xbb, 0xb1, 0x61, 0xef, 0x73, 0x94, 0x9a, 0xd4, 0x52, 0x34, 0x62, 0x92, 0x27,
	0x66, 0x09, 0x59, 0x82, 0x49, 0x3d, 0xf3, 0x83, 0xf3, 0xc5, 0x67, 0x8a, 0x54, 0x55, 0x45, 0x6c,
	0xdb, 0x38, 0xdc, 0x6d, 0x32, 0x99, 0x6d, 0xa6, 0xe5, 0xbe, 0xa3, 0x31, 0x95, 0x4a, 0x9b, 0xb7,
	0x8c, 0x6c, 0xd5, 0xaa, 0xd6, 0x58, 0xed, 0x7a, 0xd7, 0xec, 0x4b, 0xb2, 0x52, 0xed, 0x95, 0x47,
	0xba, 0x8d, 0x70, 0xc6, 0x02, 0x8c, 0x20, 0x72, 0x06, 0xc3, 0xc0, 0xf2, 0x45, 0x22, 0xa6, 0xd3,
	0x5b, 0x0d, 0x85, 0x25, 0xb4, 0xea, 0x75, 0xe3, 0xc4, 0xaf, 0xa1, 0x0b, 0xdc, 0xa5, 0x84, 0x13,
	0x93, 0x50, 0xa0, 0x92, 0x59, 0x21, 0x82, 0x48, 0x5f, 0xd6, 0x2f, 0xac, 0x5d, 0x26, 0x92, 0x4f,
	0x2c, 0x57, 0xc5, 0x77, 0xed, 0xfb, 0x45, 0xa2, 0xe1, 0x50, 0xa4, 0xda, 0x6d, 0x94, 0xd1, 0x16,
	0x8b, 0x18, 0x31, 0x02, 0x57, 0x39, 0xce, 0x4a, 0x67, 0x36, 0xcb, 0x03, 0xb3, 0x58, 0x11, 0xb6,
	0x61, 0x71, 0x98, 0xa3, 0xa9, 0xc3, 0x74, 0x5c, 0x28, 0xb8, 0xcd, 0x9a, 0x19, 0xa1, 0xcf, 0x73,
	0xd1, 0x48, 0xa3, 0x31, 0x99, 0xb4, 0xda, 0xd5, 0x2c, 0x49, 0x24, 0xa3, 0xc7, 0x7a, 0xf5, 0x8c,
	0x21, 0x1c, 0xe6, 0xb6, 0xff, 0xfc, 0xa4, 0x00, 0x2b, 0x01, 0x66, 0x55,
};
const int encoded_audio_len = sizeof(encoded_audio);