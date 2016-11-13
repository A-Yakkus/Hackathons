/**********************************************\
*       ppic.h                                   *
*          by dovotos pcx->gba program         *
/**********************************************/
#define  ppic_WIDTH   16
#define  ppic_HEIGHT  16


const u16 ppicData[] = {
                    0x0003, 0x0000, 0x0504, 0x2F21, 0x282F, 0x0B22, 0x0000, 0x0000, 0x0000, 0x0000,
                    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x0600, 0x723F, 0xA699, 0x8FAB, 0x3665,
                    0x000B, 0x0100, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6120,
                    0xDBAE, 0xF5EF, 0xEDF4, 0xA0D6, 0x124A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0x0000, 0x0000, 0x1300, 0xBD61, 0xFBF0, 0xFDFD, 0xFDFD, 0xECFC, 0x4DB2, 0x010F,
                    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x3600, 0xF1A9, 0xFEFC, 0xFEFE,
                    0xFEFE, 0xFDFE, 0x91E9, 0x012F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0x6A04, 0xFBD6, 0xFEFE, 0xFFFF, 0xFFFF, 0xFEFE, 0xCCFA, 0x0E62,};

const u16 ppicPalette[] = {
                    0x0802, 0x0802, 0x0802, 0x0802, 0x0802, 0x0802, 0x0802, 0x0802, 0x0802, 0x0000,
                    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x0000, 0x0000, 0x0000,
                    0x0000, 0x0004, 0x0000, 0x0421, 0x0421, 0x0842, 0x0842, 0x0C63, 0x0C63, 0x1084,
                    0x1084, 0x14A5, 0x14A5, 0x18C6, 0x18C6, 0x1CE7, 0x1CE7, 0x2108, 0x2108, 0x2529,
                    0x2529, 0x294A, 0x294A, 0x2D6B, 0x2D6B, 0x210C, 0x2108, 0x2529, 0x2529, 0x294A,
                    0x294A, 0x2D6B, 0x3DEF, 0x4210, 0x4210, 0x4631, 0x4631, 0x4A52, 0x4A52, 0x4673,
                    0x4671, 0x5294, 0x5294, 0x56B5, 0x56B5, 0x5AD6, 0x5AD6, 0x5EF7, 0x5EF7, 0x6318,
                    0x6318, 0x6739, 0x6739, 0x6B5A, 0x6B5A, 0x6F7B, 0x6F7B, 0x6318, 0x6318, 0x6739,
                    0x6739, 0x6B5A, 0x6B5A, 0x6F7B, 0x6F7B, 0x0004, 0x0000, 0x0421, 0x0421, 0x0842,
                    0x0842, 0x0C63, 0x0C63, 0x1084, 0x1084, 0x14A5, 0x14A5, 0x18C6, 0x18C6, 0x1CE7,
                    0x1CE7, 0x3188, 0x45BA, 0x5361, 0x0002, 0x3C00, 0x0001, 0x3DEF, 0x2D6B, 0x0000,
                    0x318C, 0x001E, 0x2800, 0x45BF, 0x2914, 0x0000, 0x45BA, 0x5366, 0x0021, 0x2800,
                    0x0020, 0x3D68, 0x4A52, 0x4E73, 0x4E73, 0x5294, 0x5294, 0x000D, 0x7FFF, 0x0001,
                    0x3EAF, 0x0001, 0x4607, 0x5365, 0x7FFF, 0x3EAE, 0x3EAF, 0x0000, 0x0005, 0x001E,
                    0x7FFF, 0x000D, 0x739C, 0x0000, 0x2914, 0x000D, 0x3C18, 0x3C12, 0x7FFF, 0x0005,
                    0x0000, 0x0002, 0x0001, 0x2800, 0x4607, 0x536E, 0x2800, 0x2913, 0x000F, 0x000F,
                    0x2818, 0x0000, 0x3EAE, 0x0000, 0x3EAE, 0x0021, 0x000D, 0x3EAF, 0x3EAF, 0x3EAF,
                    0x0000, 0x001C, 0x0000, 0x0001, 0x2818, 0x3EE0, 0x0000, 0x0000, 0x2913, 0x2913,
                    0x0001, 0x2914, 0x2914, 0x000F, 0x0003, 0x3C0C, 0x0001, 0x0001, 0x0001, 0x0000,
                    0x03F5, 0x2818, 0x0000, 0x000F, 0x2809, 0x0FF9, 0x45F9, 0x0FEE, 0x497E, 0x117F,
                    0x7FFF, 0x0FFF, 0x4544, 0x0020, 0x0021, 0x0000, 0x0FFD, 0x0000, 0x0020, 0x0020,
                    0x0021, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x2914, 0x0FE1, 0x4538, 0x0001,
                    0x0000, 0x2956, 0x0FF0, 0x213C, 0x2800, 0x0001, 0x0020, 0x205E, 0x0002, 0x1900,
                    0x20B4, 0x0000, 0x0000, 0x205E, 0x206C, 0x21C0,};
