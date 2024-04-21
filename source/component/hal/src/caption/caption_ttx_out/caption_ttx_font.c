#include "caption_ttx_font.h"

/**  National char set */

static HI_U32 s_u32aNatCharset [14][96] =
{
    {          /* Latin G0 Primary Set----0 */
        0x00,  0x01, 0x02,  0x03,  0x04,  0x05,  0x06,  0x07,
        0x08,  0x09, 0x0A,  0x0B,  0x0C,  0x0D,  0x0E,  0x0F,
        0x10,  0x11, 0x12,  0x13,  0x14,  0x15,  0x16,  0x17,
        0x18,  0x19, 0x1A,  0x1B,  0x1C,  0x1D,  0x1E,  0x1F,
        0x20,  0x21, 0x22,  0x23,  0x24,  0x25,  0x26,  0x27,
        0x28,  0x29, 0x2A,  0x2B,  0x2C,  0x2D,  0x2E,  0x2F,
        0x30,  0x31, 0x32,  0x33,  0x34,  0x35,  0x36,  0x37,
        0x38,  0x39, 0x3A,  0x3B,  0x3C,  0x3D,  0x3E,  0x3F,
        0x40,  0x41, 0x42,  0x43,  0x44,  0x45,  0x46,  0x47,
        0x48,  0x49, 0x4A,  0x4B,  0x4C,  0x4D,  0x4E,  0x4F,
        0x50,  0x51, 0x52,  0x53,  0x54,  0x55,  0x56,  0x57,
        0x58,  0x59, 0x5A,  0x5B,  0x5C,  0x5D,  0x5E,  0x5F,
    },
    {          /* Latin G0 Czech/Slovak----1 */
        0x00,  0x01, 0x02,  0x03, 0x1A0,  0x05,  0x06,  0x07,
        0x08,  0x09, 0x0A,  0x0B,  0x0C,  0x0D,  0x0E,  0x0F,
        0x10,  0x11, 0x12,  0x13,  0x14,  0x15,  0x16,  0x17,
        0x18,  0x19, 0x1A,  0x1B,  0x1C,  0x1D,  0x1E,  0x1F,
        0x1A1, 0x21, 0x22,  0x23,  0x24,  0x25,  0x26,  0x27,
        0x28,  0x29, 0x2A,  0x2B,  0x2C,  0x2D,  0x2E,  0x2F,
        0x30,  0x31, 0x32,  0x33,  0x34,  0x35,  0x36,  0x37,
        0x38,  0x39, 0x3A, 0x1A2, 0x1A3, 0x1A4, 0x1A5, 0x1A6,
        0x1A7, 0x41, 0x42,  0x43,  0x44,  0x45,  0x46,  0x47,
        0x48,  0x49, 0x4A,  0x4B,  0x4C,  0x4D,  0x4E,  0x4F,
        0x50,  0x51, 0x52,  0x53,  0x54,  0x55,  0x56,  0x57,
        0x58,  0x59, 0x5A, 0x1A8, 0x1A9, 0x1AA, 0x1AB,  0x5F,
    },
    {         /* Latin G0 English----2 */
        0x00,  0x01, 0x02, 0x143, 0x144,  0x05,  0x06,  0x07,
        0x08,  0x09, 0x0A,  0x0B,  0x0C,  0x0D,  0x0E,  0x0F,
        0x10,  0x11, 0x12,  0x13,  0x14,  0x15,  0x16,  0x17,
        0x18,  0x19, 0x1A,  0x1B,  0x1C,  0x1D,  0x1E,  0x1F,
        0x20,  0x21, 0x22,  0x23,  0x24,  0x25,  0x26,  0x27,
        0x28,  0x29, 0x2A,  0x2B,  0x2C,  0x2D,  0x2E,  0x2F,
        0x30,  0x31, 0x32,  0x33,  0x34,  0x35,  0x36,  0x37,
        0x38,  0x39, 0x3A, 0x14C, 0x15D, 0x14E, 0x14D,  0x03,
        0x170, 0x41, 0x42,  0x43,  0x44,  0x45,  0x46,  0x47,
        0x48,  0x49, 0x4A,  0x4B,  0x4C,  0x4D,  0x4E,  0x4F,
        0x50,  0x51, 0x52,  0x53,  0x54,  0x55,  0x56,  0x57,
        0x58,  0x59, 0x5A, 0x15C, 0x1AE, 0x15E, 0x158,  0x5F,
    },
    {          /* Latin G0 Estonian----3 */
        0x00,  0x01, 0x02,  0x03, 0x1AF,  0x05,  0x06,  0x07,
        0x08,  0x09, 0x0A,  0x0B,  0x0C,  0x0D,  0x0E,  0x0F,
        0x10,  0x11, 0x12,  0x13,  0x14,  0x15,  0x16,  0x17,
        0x18,  0x19, 0x1A,  0x1B,  0x1C,  0x1D,  0x1E,  0x1F,
        0x1B0, 0x21, 0x22,  0x23,  0x24,  0x25,  0x26,  0x27,
        0x28,  0x29, 0x2A,  0x2B,  0x2C,  0x2D,  0x2E,  0x2F,
        0x30,  0x31, 0x32,  0x33,  0x34,  0x35,  0x36,  0x37,
        0x38,  0x39, 0x3A, 0x1B1, 0x1B2, 0x1B3, 0x1B4, 0x1B5,
        0x1AB, 0x41, 0x42,  0x43,  0x44,  0x45,  0x46,  0x47,
        0x48,  0x49, 0x4A,  0x4B,  0x4C,  0x4D,  0x4E,  0x4F,
        0x50,  0x51, 0x52,  0x53,  0x54,  0x55,  0x56,  0x57,
        0x58,  0x59, 0x5A, 0x1B6, 0x1B7, 0x1A3, 0x1B8,  0x5F,
    },
    {          /* Latin G0 French----4 */
        0x00,  0x01, 0x02, 0x1A7, 0x1B9,  0x05,  0x06,  0x07,
        0x08,  0x09, 0x0A,  0x0B,  0x0C,  0x0D,  0x0E,  0x0F,
        0x10,  0x11, 0x12,  0x13,  0x14,  0x15,  0x16,  0x17,
        0x18,  0x19, 0x1A,  0x1B,  0x1C,  0x1D,  0x1E,  0x1F,
        0x1BA, 0x21, 0x22,  0x23,  0x24,  0x25,  0x26,  0x27,
        0x28,  0x29, 0x2A,  0x2B,  0x2C,  0x2D,  0x2E,  0x2F,
        0x30,  0x31, 0x32,  0x33,  0x34,  0x35,  0x36,  0x37,
        0x38,  0x39, 0x3A, 0x1BB, 0x1BC, 0x1BD, 0x1BE,  0x03,
        0x1BF, 0x41, 0x42,  0x43,  0x44,  0x45,  0x46,  0x47,
        0x48,  0x49, 0x4A,  0x4B,  0x4C,  0x4D,  0x4E,  0x4F,
        0x50,  0x51, 0x52,  0x53,  0x54,  0x55,  0x56,  0x57,
        0x58,  0x59, 0x5A, 0x1C0, 0x1C1, 0x1C2, 0x1C3,  0x5F,
    },

    {          /* Latin G0 German----5 */
        0x00,  0x01, 0x02,  0x03, 0x144,  0x05,  0x06,  0x07,
        0x08,  0x09, 0x0A,  0x0B,  0x0C,  0x0D,  0x0E,  0x0F,
        0x10,  0x11, 0x12,  0x13,  0x14,  0x15,  0x16,  0x17,
        0x18,  0x19, 0x1A,  0x1B,  0x1C,  0x1D,  0x1E,  0x1F,
        0x147, 0x21, 0x22,  0x23,  0x24,  0x25,  0x26,  0x27,
        0x28,  0x29, 0x2A,  0x2B,  0x2C,  0x2D,  0x2E,  0x2F,
        0x30,  0x31, 0x32,  0x33,  0x34,  0x35,  0x36,  0x37,
        0x38,  0x39, 0x3A, 0x1B1, 0x1B2, 0x1B4,  0x3E,  0x3F,
        0x150, 0x41, 0x42,  0x43,  0x44,  0x45,  0x46,  0x47,
        0x48,  0x49, 0x4A,  0x4B,  0x4C,  0x4D,  0x4E,  0x4F,
        0x50,  0x51, 0x52,  0x53,  0x54,  0x55,  0x56,  0x57,
        0x58,  0x59, 0x5A, 0x1B6, 0x1B7, 0x1B8, 0x19B,  0x5F,
    },

    {          /* Latin G0 Italian----6 */
        0x00,  0x01, 0x02, 0x143, 0x144,  0x05,  0x06,  0x07,
        0x08,  0x09, 0x0A,  0x0B,  0x0C,  0x0D,  0x0E,  0x0F,
        0x10,  0x11, 0x12,  0x13,  0x14,  0x15,  0x16,  0x17,
        0x18,  0x19, 0x1A,  0x1B,  0x1C,  0x1D,  0x1E,  0x1F,
        0x1A7, 0x21, 0x22,  0x23,  0x24,  0x25,  0x26,  0x27,
        0x28,  0x29, 0x2A,  0x2B,  0x2C,  0x2D,  0x2E,  0x2F,
        0x30,  0x31, 0x32,  0x33,  0x34,  0x35,  0x36,  0x37,
        0x38,  0x39, 0x3A, 0x150, 0x1C3, 0x14E, 0x14D,  0x03,
        0x1BD, 0x41, 0x42,  0x43,  0x44,  0x45,  0x46,  0x47,
        0x48,  0x49, 0x4A,  0x4B,  0x4C,  0x4D,  0x4E,  0x4F,
        0x50,  0x51, 0x52,  0x53,  0x54,  0x55,  0x56,  0x57,
        0x58,  0x59, 0x5A, 0x1BA, 0x1AD, 0x1BF, 0x1C5,  0x5F,
    },
    {          /* Latin G0 Lettish/Lithuanian----7 */
        0x00,  0x01, 0x02,  0x03, 0x144,  0x05,  0x06,  0x07,
        0x08,  0x09, 0x0A,  0x0B,  0x0C,  0x0D,  0x0E,  0x0F,
        0x10,  0x11, 0x12,  0x13,  0x14,  0x15,  0x16,  0x17,
        0x18,  0x19, 0x1A,  0x1B,  0x1C,  0x1D,  0x1E,  0x1F,
        0x1B0, 0x21, 0x22,  0x23,  0x24,  0x25,  0x26,  0x27,
        0x28,  0x29, 0x2A,  0x2B,  0x2C,  0x2D,  0x2E,  0x2F,
        0x30,  0x31, 0x32,  0x33,  0x34,  0x35,  0x36,  0x37,
        0x38,  0x39, 0x3A, 0x1C6, 0x1C7, 0x1B3, 0x1A1, 0x1C8,
        0x1AB, 0x41, 0x42,  0x43,  0x44,  0x45,  0x46,  0x47,
        0x48,  0x49, 0x4A,  0x4B,  0x4C,  0x4D,  0x4E,  0x4F,
        0x50,  0x51, 0x52,  0x53,  0x54,  0x55,  0x56,  0x57,
        0x58,  0x59, 0x5A, 0x1C9, 0x1CA, 0x1A3, 0x1CB,  0x5F,
    },
    {          /* Latin G0 Polish----8 */
        0x00,  0x01, 0x02,  0x03, 0x1CC,  0x05,  0x06,  0x07,
        0x08,  0x09, 0x0A,  0x0B,  0x0C,  0x0D,  0x0E,  0x0F,
        0x10,  0x11, 0x12,  0x13,  0x14,  0x15,  0x16,  0x17,
        0x18,  0x19, 0x1A,  0x1B,  0x1C,  0x1D,  0x1E,  0x1F,
        0x1C9, 0x21, 0x22,  0x23,  0x24,  0x25,  0x26,  0x27,
        0x28,  0x29, 0x2A,  0x2B,  0x2C,  0x2D,  0x2E,  0x2F,
        0x30,  0x31, 0x32,  0x33,  0x34,  0x35,  0x36,  0x37,
        0x38,  0x39, 0x3A, 0x1CD, 0x1CE, 0x188, 0x1CF, 0x1D0,
        0x1D1, 0x41, 0x42,  0x43,  0x44,  0x45,  0x46,  0x47,
        0x48,  0x49, 0x4A,  0x4B,  0x4C,  0x4D,  0x4E,  0x4F,
        0x50,  0x51, 0x52,  0x53,  0x54,  0x55,  0x56,  0x57,
        0x58,  0x59, 0x5A, 0x1D2, 0x1D3, 0x198, 0x1D4,  0x5F,
    },
    {          /* Latin G0 Portuguese/Spanish----9 */
        0x00,  0x01, 0x02, 0x1C3, 0x144,  0x05,  0x06,  0x07,
        0x08,  0x09, 0x0A,  0x0B,  0x0C,  0x0D,  0x0E,  0x0F,
        0x10,  0x11, 0x12,  0x13,  0x14,  0x15,  0x16,  0x17,
        0x18,  0x19, 0x1A,  0x1B,  0x1C,  0x1D,  0x1E,  0x1F,
        0x141, 0x21, 0x22,  0x23,  0x24,  0x25,  0x26,  0x27,
        0x28,  0x29, 0x2A,  0x2B,  0x2C,  0x2D,  0x2E,  0x2F,
        0x30,  0x31, 0x32,  0x33,  0x34,  0x35,  0x36,  0x37,
        0x38,  0x39, 0x3A, 0x1A8, 0x1A7, 0x1A5, 0x1D0, 0x1AA,
        0x15F, 0x41, 0x42,  0x43,  0x44,  0x45,  0x46,  0x47,
        0x48,  0x49, 0x4A,  0x4B,  0x4C,  0x4D,  0x4E,  0x4F,
        0x50,  0x51, 0x52,  0x53,  0x54,  0x55,  0x56,  0x57,
        0x58,  0x59, 0x5A, 0x1B8, 0x1D5, 0x1BF, 0x1BA,  0x5F,
    },
    {          /* Latin G0 Rumanian----10 */
        0x00,  0x01, 0x02, 0x03, 0x148,  0x05,  0x06,   0x07,
        0x08,  0x09, 0x0A,  0x0B,  0x0C,  0x0D,  0x0E,  0x0F,
        0x10,  0x11, 0x12,  0x13,  0x14,  0x15,  0x16,  0x17,
        0x18,  0x19, 0x1A,  0x1B,  0x1C,  0x1D,  0x1E,  0x1F,
        0x1D6, 0x21, 0x22,  0x23,  0x24,  0x25,  0x26,  0x27,
        0x28,  0x29, 0x2A,  0x2B,  0x2C,  0x2D,  0x2E,  0x2F,
        0x30,  0x31, 0x32,  0x33,  0x34,  0x35,  0x36,  0x37,
        0x38,  0x39, 0x3A, 0x1D7, 0x1D8, 0x1D9, 0x1DA, 0x195,
        0x1DB, 0x41, 0x42,  0x43,  0x44,  0x45,  0x46,  0x47,
        0x48,  0x49, 0x4A,  0x4B,  0x4C,  0x4D,  0x4E,  0x4F,
        0x50,  0x51, 0x52,  0x53,  0x54,  0x55,  0x56,  0x57,
        0x58,  0x59, 0x5A, 0x1C0, 0x1DC, 0x1DD, 0x1BE,  0x5F,
    },
    {          /* Latin G0 Serbian/Croatian/Slovenian----11 */
        0x00,  0x01, 0x02,  0x03, 0x1DE,  0x05,  0x06,  0x07,
        0x08,  0x09, 0x0A,  0x0B,  0x0C,  0x0D,  0x0E,  0x0F,
        0x10,  0x11, 0x12,  0x13,  0x14,  0x15,  0x16,  0x17,
        0x18,  0x19, 0x1A,  0x1B,  0x1C,  0x1D,  0x1E,  0x1F,
        0x1DF, 0x21, 0x22,  0x23,  0x24,  0x25,  0x26,  0x27,
        0x28,  0x29, 0x2A,  0x2B,  0x2C,  0x2D,  0x2E,  0x2F,
        0x30,  0x31, 0x32,  0x33,  0x34,  0x35,  0x36,  0x37,
        0x38,  0x39, 0x3A, 0x1E0, 0x1B3, 0x182, 0x1B0, 0x1BB,
        0x1A1, 0x41, 0x42,  0x43,  0x44,  0x45,  0x46,  0x47,
        0x48,  0x49, 0x4A,  0x4B,  0x4C,  0x4D,  0x4E,  0x4F,
        0x50,  0x51, 0x52,  0x53,  0x54,  0x55,  0x56,  0x57,
        0x58,  0x59, 0x5A, 0x1E0, 0x1A3, 0x192, 0x1AB,  0x5F,
    },
    {          /* Latin G0 Swedish/Finnish/Hungarian----12 */
        0x00,  0x01, 0x02,  0x03,  0x04,  0x05,  0x06,  0x07,
        0x08,  0x09, 0x0A,  0x0B,  0x0C,  0x0D,  0x0E,  0x0F,
        0x10,  0x11, 0x12,  0x13,  0x14,  0x15,  0x16,  0x17,
        0x18,  0x19, 0x1A,  0x1B,  0x1C,  0x1D,  0x1E,  0x1F,
        0x1E1, 0x21, 0x22,  0x23,  0x24,  0x25,  0x26,  0x27,
        0x28,  0x29, 0x2A,  0x2B,  0x2C,  0x2D,  0x2E,  0x2F,
        0x30,  0x31, 0x32,  0x33,  0x34,  0x35,  0x36,  0x37,
        0x38,  0x39, 0x3A, 0x1B1, 0x1B2, 0x1E2, 0x1B4,  0x3F,
        0x1A7, 0x41, 0x42,  0x43,  0x44,  0x45,  0x46,  0x47,
        0x48,  0x49, 0x4A,  0x4B,  0x4C,  0x4D,  0x4E,  0x4F,
        0x50,  0x51, 0x52,  0x53,  0x54,  0x55,  0x56,  0x57,
        0x58,  0x59, 0x5A, 0x1B6, 0x1B7, 0x1E3, 0x1B8,  0x5F,
    },
    {          /* Latin G0 Turkish----13 */
        0x00,  0x01, 0x02,  0x1e4,  0x1e5,  0x05,  0x06,    0x07,
        0x08,  0x09, 0x0A,  0x0B,  0x0C,  0x0D,  0x0E,  0x0F,
        0x10,  0x11, 0x12,  0x13,  0x14,  0x15,  0x16,  0x17,
        0x18,  0x19, 0x1A,  0x1B,  0x1C,  0x1D,  0x1E,  0x1F,
        0x1E6, 0x21, 0x22,  0x23,  0x24,  0x25,  0x26,  0x27,
        0x28,  0x29, 0x2A,  0x2B,  0x2C,  0x2D,  0x2E,  0x2F,
        0x30,  0x31, 0x32,  0x33,  0x34,  0x35,  0x36,  0x37,
        0x38,  0x39, 0x3A, 0x1D8, 0x1B2, 0x1C4, 0x1B4, 0x1AC,
        0x195, 0x41, 0x42,  0x43,  0x44,  0x45,  0x46,  0x47,
        0x48,  0x49, 0x4A,  0x4B,  0x4C,  0x4D,  0x4E,  0x4F,
        0x50,  0x51, 0x52,  0x53,  0x54,  0x55,  0x56,  0x57,
        0x58,  0x59, 0x5A, 0x1DC, 0x1B7, 0x1C3, 0x1B8,  0x5F,
    },
};

static HI_U32 caption_ttx_font_getG0CharIndex(HI_UNF_TTX_CHARATTR_S stCharAttr)
{
    HI_U32 u32Char = 0;
    HI_U8 u8NationSet = 0;

    u32Char = stCharAttr.u32Index;

    switch (stCharAttr.enG0Set)
    {
        case HI_UNF_TTX_G0SET_LATIN:
            u8NationSet = stCharAttr.u8NationSet;
            u32Char = s_u32aNatCharset[u8NationSet][u32Char - 0x20];
            break;

        case  HI_UNF_TTX_G0SET_CYRILLIC_1:
            u32Char -= 0x20;
            u32Char += 0x2b0;
            break;

        case HI_UNF_TTX_G0SET_CYRILLIC_2:
            u32Char -= 0x20;
            u32Char += 0x310;
            break;

        case HI_UNF_TTX_G0SET_CYRILLIC_3:
            u32Char -= 0x20;
            u32Char += 0x370;
            break;

        case HI_UNF_TTX_G0SET_GREEK:
            u32Char -= 0x20;
            u32Char += 0x430;
            break;

        case HI_UNF_TTX_G0SET_HEBREW:
            u32Char -= 0x20;
            u32Char += 0x4f0;
            break;

        case HI_UNF_TTX_G0SET_ARABIC:
            u32Char -= 0x20;
            u32Char += 0x1f0;
            break;

        default:
            break;
    }

    return u32Char;
}

static HI_U32 caption_ttx_font_getG2CharIndex(HI_UNF_TTX_CHARATTR_S stCharAttr)
{
    HI_U32 u32Char = 0;

    u32Char = stCharAttr.u32Index;

    switch (stCharAttr.enG2Set)
    {
        case HI_UNF_TTX_G2SET_LATIN:
            u32Char -= 0x20;
            u32Char += 0x140;
            break;

        case HI_UNF_TTX_G2SET_CYRILLIC:
            u32Char -= 0x20;
            u32Char += 0x3d0;
            break;

        case HI_UNF_TTX_G2SET_GREEK:
            u32Char -= 0x20;
            u32Char += 0x490;
            break;

        case HI_UNF_TTX_G2SET_ARABIC:
            u32Char -= 0x20;
            u32Char += 0x250;
            break;

        default:
            break;
    }

    return u32Char;
}

HI_U32 caption_ttx_font_findIndex(HI_UNF_TTX_CHARATTR_S stCharAttr)
{
    HI_U32 u32Char = 0;

    if ((stCharAttr.u32Index < 0x20) || (stCharAttr.u32Index > 0x7f)) /**  Invalid param, just return */
    {
        return u32Char;
    }

    u32Char = stCharAttr.u32Index;

    switch (stCharAttr.enCharSet)
    {
        case HI_UNF_TTX_CHARSET_G0:
            u32Char = caption_ttx_font_getG0CharIndex(stCharAttr);
            break;

        case HI_UNF_TTX_CHARSET_G1:
            u32Char -= 0x20;
            u32Char += (stCharAttr.bContiguous ? 0 : 1) * 64 + ((u32Char >= 32) ? 64 : 96);
            break;

        case HI_UNF_TTX_CHARSET_G2:
            u32Char = caption_ttx_font_getG2CharIndex(stCharAttr);
            break;

        case HI_UNF_TTX_CHARSET_G3:
            u32Char -= 0x20;
            u32Char += 0xE0;
            break;

        default:
            break;
    }

    return u32Char;
}
