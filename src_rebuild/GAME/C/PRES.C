#include "THISDUST.H"
#include "PRES.H"
#include "SYSTEM.H"
#include "TEXTURE.H"

#include <STRING.H>

extern TEXTURE_DETAILS digit_texture;

FONT_DIGIT fontDigit[] = {
	{ 2, 0xE },
	{ 0x11, 0xE},
	{ 0x20, 0x10},
	{ 0x31, 0xF},
	{ 0x41, 0xE },
	{ 0x50, 0xE },
	{ 4, 0x10 },
	{ 0x15, 0xE },
	{ 0x24, 0xF },
	{ 0x34, 0x11 },
	{ 0x46, 0xB },
	{ 0x52, 7 },
};

TEXTURE_DETAILS button_textures[11];

char* button_names[11] = {
	"BTNTRIAN",
	"BTNCIRCL",
	"BTNCROSS",
	"BTNSQUAR",
	"BTNUP",
	"BTNDOWN",
	"BTNLEFT",
	"BTNRIGHT",
	"BTNSTART",
	"BTNSELEC",
	"BTNDPAD",
};

CVECTOR gFontColour;

short fonttpage = 0;
short fontclutid = 0;

char AsciiTable[256] = { 0 };
OUT_FONTINFO fontinfo[128];

// decompiled code
// original method signature: 
// void /*$ra*/ SetTextColour(unsigned char Red /*$a0*/, unsigned char Green /*$a1*/, unsigned char Blue /*$a2*/)
 // line 228, offset 0x00074a10
	/* begin block 1 */
		// Start line: 1308
	/* end block 1 */
	// End Line: 1309

	/* begin block 2 */
		// Start line: 456
	/* end block 2 */
	// End Line: 457

	/* begin block 3 */
		// Start line: 1309
	/* end block 3 */
	// End Line: 1310

// [D]
void SetTextColour(unsigned char Red, unsigned char Green, unsigned char Blue)
{
	gFontColour.r = Red;
	gFontColour.g = Green;
	gFontColour.b = Blue;
}



// decompiled code
// original method signature: 
// int /*$ra*/ StringWidth(char *pString /*$a0*/)
 // line 245, offset 0x00074a24
	/* begin block 1 */
		// Start line: 246
		// Start offset: 0x00074A24
		// Variables:
	// 		int w; // $a2
	// 		char let; // $a1

		/* begin block 1.1 */
			// Start line: 256
			// Start offset: 0x00074A60
			// Variables:
		// 		char convLet; // $v1
		/* end block 1.1 */
		// End offset: 0x00074A98
		// End Line: 266
	/* end block 1 */
	// End offset: 0x00074AB0
	// End Line: 269

	/* begin block 2 */
		// Start line: 1342
	/* end block 2 */
	// End Line: 1343

	/* begin block 3 */
		// Start line: 1343
	/* end block 3 */
	// End Line: 1344

// [D] [A]
int StringWidth(char *pString)
{
	char let;
	int w;

	w = 0;

	while ((let = *pString++) != 0) {
		if (let == ' ')
		{
			w += 4;
		}
		else
		{
			if (let < 0x80 || let > 0x8a)
			{
				char convLet = AsciiTable[let];

				if (convLet != 255)
					w += fontinfo[convLet].width;
			}
			else
			{
				w += 24;
			}
		}
	}

	return w;
}



// decompiled code
// original method signature: 
// int /*$ra*/ OutputString(char *pString /*$s2*/, int formatting /*$s0*/, int x /*$a2*/, int y /*$s3*/, int xw /*stack 16*/, int r /*stack 20*/, int g /*stack 24*/, int b /*stack 28*/)
 // line 285, offset 0x00074ab0
	/* begin block 1 */
		// Start line: 286
		// Start offset: 0x00074AB0
		// Variables:
	// 		int xpos; // $s1

		/* begin block 1.1 */
			// Start line: 302
			// Start offset: 0x00074B14
		/* end block 1.1 */
		// End offset: 0x00074B14
		// End Line: 302
	/* end block 1 */
	// End offset: 0x00074B8C
	// End Line: 323

	/* begin block 2 */
		// Start line: 1405
	/* end block 2 */
	// End Line: 1406

	/* begin block 3 */
		// Start line: 1422
	/* end block 3 */
	// End Line: 1423

	/* begin block 4 */
		// Start line: 1423
	/* end block 4 */
	// End Line: 1424

// [D]
int OutputString(char *pString, int formatting, int x, int y, int xw, int r, int g, int b)
{
	SetTextColour((u_char)r, (u_char)g, (u_char)b);

	if ((formatting & 1) != 0)
	{
		PrintString(pString, x, y);
	}
	else if ((formatting & 2) != 0)
	{
		int xpos = x + (xw - StringWidth(pString) >> 1);
		
		x = xpos * 0x10000 >> 16;

		PrintString(pString, x, y);
	}
	else if ((formatting & 4) != 0)
	{
		PrintStringRightAligned(pString, x, y); // [A] was inlined
	}

	return x;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintStringRightAligned(char *pString /*$s1*/, int x /*$s0*/, int y /*$s2*/)
 // line 333, offset 0x00074b8c
	/* begin block 1 */
		// Start line: 1514
	/* end block 1 */
	// End Line: 1515

	/* begin block 2 */
		// Start line: 1525
	/* end block 2 */
	// End Line: 1526

// [D] [A]
void PrintStringRightAligned(char *pString, int x, int y)
{
	PrintString(pString, x - StringWidth(pString), y);
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintStringCentred(char *pString /*$s1*/, short y /*$a1*/)
 // line 347, offset 0x00074bd8
	/* begin block 1 */
		// Start line: 348
		// Start offset: 0x00074BD8
	/* end block 1 */
	// End offset: 0x00074C28
	// End Line: 352

	/* begin block 2 */
		// Start line: 1553
	/* end block 2 */
	// End Line: 1554

// [D] [A]
void PrintStringCentred(char *pString, short y)
{
	PrintString(pString, (320 - StringWidth(pString)) * 0x8000 >> 0x10, y);
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadFont(char *buffer /*$a0*/)
 // line 360, offset 0x00073cc8
	/* begin block 1 */
		// Start line: 361
		// Start offset: 0x00073CC8
		// Variables:
	// 		struct RECT dest; // stack offset -24
	// 		char *file; // $s1
	// 		int i; // $v1
	// 		int nchars; // $s0
	/* end block 1 */
	// End offset: 0x00073EA0
	// End Line: 408

	/* begin block 2 */
		// Start line: 720
	/* end block 2 */
	// End Line: 721

	/* begin block 3 */
		// Start line: 722
	/* end block 3 */
	// End Line: 723

// [D] [A]
void LoadFont(char *buffer)
{
	RECT16 rect;
	char *file;
	int nchars;

	setRECT16(&fontclutpos, 976, 256, 16, 1);

	//file = (char *)&DAT_0011b400;		// [A] FIXME: this font address might be used somewhere else
	file = _frontend_buffer;
	
	if (buffer != NULL)
		file = buffer;

	Loadfile("GFX\\FONT2.FNT", file);

	nchars = *(int *)file;
	file += 4;

	memcpy(fontinfo, file, nchars * sizeof(OUT_FONTINFO));
	file += (nchars * sizeof(OUT_FONTINFO));

	memcpy(AsciiTable, file, 256);
	file += 256;

	fontclutid = GetClut(fontclutpos.x, fontclutpos.y);

	short *palette = (short *)file;

	for (int i = 0; i < 16; i++)
		palette[i] &= 0x7fff;

	palette[1] |= 0x8000;
	palette[2] |= 0x8000;

	LoadImage(&fontclutpos, (u_long *)file);
	file += (sizeof(short) * 16);

	fonttpage = GetTPage(0, 0, 960, 466);

	setRECT16(&rect, 960, 466, 64, 46);

	LoadImage(&rect, (u_long *)file);
	DrawSync(0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ StoreClut2(unsigned long *pDest /*$a1*/, int x /*$a1*/, int y /*$a2*/)
 // line 416, offset 0x00074c28
	/* begin block 1 */
		// Start line: 417
		// Start offset: 0x00074C28
		// Variables:
	// 		struct RECT rect; // stack offset -16
	/* end block 1 */
	// End offset: 0x00074C64
	// End Line: 426

	/* begin block 2 */
		// Start line: 1628
	/* end block 2 */
	// End Line: 1629

	/* begin block 3 */
		// Start line: 1693
	/* end block 3 */
	// End Line: 1694

	/* begin block 4 */
		// Start line: 1696
	/* end block 4 */
	// End Line: 1697

// [D] [A]
void StoreClut2(ulong *pDest, int x, int y)
{
	RECT16 rect;

	setRECT16(&rect, x, y, 16, 1);
	StoreImage2(&rect, pDest);
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetCLUT16Flags(unsigned short clutID /*$a0*/, unsigned short mask /*$s2*/, char transparent /*$s0*/)
 // line 434, offset 0x00074c64
	/* begin block 1 */
		// Start line: 435
		// Start offset: 0x00074C64
		// Variables:
	// 		unsigned short buffer[16]; // stack offset -56
	// 		unsigned short *pCurrent; // $a0
	// 		char ctr; // $a1
	// 		int x; // $s3
	// 		int y; // $s1
	/* end block 1 */
	// End offset: 0x00074D34
	// End Line: 455

	/* begin block 2 */
		// Start line: 1731
	/* end block 2 */
	// End Line: 1732

	/* begin block 3 */
		// Start line: 1740
	/* end block 3 */
	// End Line: 1741

// [D]
void SetCLUT16Flags(ushort clutID, ushort mask, char transparent)
{
#ifdef PSX
	ushort uVar1;
	ushort *puVar2;
	uint uVar3;
	ushort *pCurrent;
	int x;
	ushort buffer[16];

	x = ((uint)clutID & 0x3f) << 4;

	StoreClut2((ulong *)buffer, x, (uint)(clutID >> 6));

	pCurrent = buffer + transparent;
	uVar3 = 1;

	// [A]
	while ((pCurrent - buffer) < 16)
	{
		if (((int)(uint)mask >> (uVar3 & 0x1f) & 1U) == 0) 
		{
			uVar1 = *pCurrent & 0x7fff;
		}
		else 
		{
			uVar1 = *pCurrent | 0x8000;
		}

		*pCurrent++ = uVar1;
		uVar3 = uVar3 + 1 & 0xff;
	}

	LoadClut2((u_long*)buffer, x, (uint)(clutID >> 6));
#endif // PSX
}



// decompiled code
// original method signature: 
// int /*$ra*/ PrintString(char *string /*$s3*/, int x /*$s2*/, int y /*$s6*/)
 // line 457, offset 0x00073ea0
	/* begin block 1 */
		// Start line: 458
		// Start offset: 0x00073EA0
		// Variables:
	// 		struct OUT_FONTINFO *pFontInfo; // $a1
	// 		struct SPRT *font; // $s0
	// 		unsigned char width; // $s1
	// 		unsigned char c; // $s1
	// 		int index; // $v1
	/* end block 1 */
	// End offset: 0x00074140
	// End Line: 536

	/* begin block 2 */
		// Start line: 895
	/* end block 2 */
	// End Line: 896

	/* begin block 3 */
		// Start line: 945
	/* end block 3 */
	// End Line: 946

	/* begin block 4 */
		// Start line: 953
	/* end block 4 */
	// End Line: 954

// MAP.C ????
extern int gShowMap;

// [D] [A]
int PrintString(char *string, int x, int y)
{
	OUT_FONTINFO *pFontInfo;
	SPRT *font;
	u_char let;
	u_char c;

	if (current == NULL)
		return -1;

	font = (SPRT *)current->primptr;

	if (gShowMap)
		font = (SPRT *)SetFontTPage(font);

	while ((let = *string++) != 0)
	{
		if (let == ' ')
		{
			x += 4;
		}
		else
		{
			if (let < 0x80 || let > 0x8a)
			{
				int index = AsciiTable[let];

				if (index == -1)
					index = AsciiTable[63];

				pFontInfo = &fontinfo[index];

				setSprt(font);
#ifdef PSX
				setSemiTrans(font, 1);
#endif

				setRGB0(font, gFontColour.r, gFontColour.g, gFontColour.b);
				setXY0(font, x, pFontInfo->offy + y);
				setUV0(font, pFontInfo->x, pFontInfo->y - 46);
				setWH(font, pFontInfo->width, pFontInfo->height);

				font->clut = fontclutid;

				if (gShowMap)
				{
					DrawPrim(font);
				}
				else
				{
					addPrim(current->ot, font);
				}

				font++;

				x += pFontInfo->width;
			}
			else
			{
				if (gShowMap)
				{
					font = (SPRT *)DrawButton(let, font, x, y);
					font = (SPRT *)SetFontTPage(font);
				}
				else
				{
					font = (SPRT *)SetFontTPage(font);
					font = (SPRT *)DrawButton(let, font, x, y);
				}

				x += 24;
			}
		}
	}

	if (gShowMap)
		DrawSync(0);
	else
		current->primptr = (char *)SetFontTPage(font);

	return x;
}



// decompiled code
// original method signature: 
// short /*$ra*/ PrintDigit(int x /*$t3*/, int y /*$s1*/, char *string /*$a2*/)
 // line 539, offset 0x00074140
	/* begin block 1 */
		// Start line: 540
		// Start offset: 0x00074140
		// Variables:
	// 		struct FONT_DIGIT *pDigit; // $a1
	// 		struct SPRT *font; // $t0
	// 		char width; // $a3
	// 		char fixedWidth; // $t1
	// 		char vOff; // $t2
	// 		char h; // $a0

		/* begin block 1.1 */
			// Start line: 552
			// Start offset: 0x00074190
			// Variables:
		// 		char let; // $v1
		// 		char convLet; // $a0
		/* end block 1.1 */
		// End offset: 0x000741F4
		// End Line: 583
	/* end block 1 */
	// End offset: 0x00074364
	// End Line: 606

	/* begin block 2 */
		// Start line: 1125
	/* end block 2 */
	// End Line: 1126

	/* begin block 3 */
		// Start line: 1129
	/* end block 3 */
	// End Line: 1130

// [D] [A]
short PrintDigit(int x, int y, char *string)
{
	SPRT *font;
	char width;
	char fixedWidth;
	char vOff;
	char h;
	char convLet;
	char let;
	
	while ((let = *string++) != 0) 
	{
		if (let == ':')
		{
			convLet = 11;
		}
		else if (let == '/') 
		{
			convLet = 10;
		}
		else 
		{
			convLet = (let - '0');
		}

		FONT_DIGIT *pDigit = &fontDigit[convLet];

		fixedWidth = pDigit->width;
		width = 16;

		if (let == ':') 
			width = 8;

		if (convLet < 6) 
		{
			vOff = 0;
			h = 28;
		}
		else 
		{
			vOff = 28;
			h = 31;
		}

		font = (SPRT *)current->primptr;
		current->primptr += sizeof(SPRT);

		setSprt(font);
#ifdef PSX
		setSemiTrans(font, 1);
#endif

		setRGB0(font, gFontColour.r, gFontColour.g, gFontColour.b);
		setXY0(font, x + ((width - fixedWidth) >> 1), y);
		setUV0(font, digit_texture.coords.u0 + pDigit->xOffset, digit_texture.coords.v0 + vOff);
		setWH(font, fixedWidth, h);

		font->clut = digit_texture.clutid;

		addPrim(current->ot, font);
		font++;
		
		x += width;
	}

	POLY_FT3* null = (POLY_FT3*)current->primptr;

	setPolyFT3(null);
	setSemiTrans(null, 1);

	setXY3(null, -1, -1, -1, -1, -1, -1);

	null->tpage = digit_texture.tpageid;
	
	addPrim(current->ot, null);
	current->primptr += sizeof(POLY_FT3);

	return x;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PrintStringFeature(char *string /*$a0*/, int x /*$a1*/, int y /*$a2*/, int w /*$a3*/, int h /*stack 16*/, int transparent /*stack 20*/)
 // line 612, offset 0x00074d34
	/* begin block 1 */
		// Start line: 1968
	/* end block 1 */
	// End Line: 1969

	/* begin block 2 */
		// Start line: 2126
	/* end block 2 */
	// End Line: 2127

	/* begin block 3 */
		// Start line: 2127
	/* end block 3 */
	// End Line: 2128

// [D] [A]
int PrintStringFeature(char *string, int x, int y, int w, int h, int transparent)
{
	return PrintString(string, x, y);
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintStringBoxed(char *string /*$s2*/, int ix /*$s5*/, int iy /*$a2*/)
 // line 643, offset 0x00074364
	/* begin block 1 */
		// Start line: 644
		// Start offset: 0x00074364
		// Variables:
	// 		struct OUT_FONTINFO *pFontInfo; // $a1
	// 		struct SPRT *font; // $s0
	// 		char word[32]; // stack offset -64
	// 		char *wpt; // $t0
	// 		char c; // $a0
	// 		int x; // $s1
	// 		int y; // $s3
	// 		int index; // $a1
	// 		int wordcount; // $s4
	/* end block 1 */
	// End offset: 0x000745DC
	// End Line: 711

	/* begin block 2 */
		// Start line: 1338
	/* end block 2 */
	// End Line: 1339

	/* begin block 3 */
		// Start line: 1376
	/* end block 3 */
	// End Line: 1377

	/* begin block 4 */
		// Start line: 1387
	/* end block 4 */
	// End Line: 1388

// [D]
void PrintStringBoxed(char *string, int ix, int iy)
{
	char bVar1;
	char *pbVar2;
	unsigned char uVar3;
	short sVar4;
	int iVar6;
	int index;
	SPRT *font;
	int x;
	int iVar10;
	char word[32];

	font = (SPRT *)current->primptr;

	if (*string != 0) 
	{
		iVar10 = 1;
		x = ix;
		do {
			string = GetNextWord(string, word);
			iVar6 = StringWidth(word);

			if (0x134 < x + iVar6 && (iVar10 != 1 || (*string != 0)))
			{
				iy = iy + 0xe;
				x = ix;
			}

			pbVar2 = word;
			bVar1 = word[0];

			while (pbVar2 = pbVar2 + 1, bVar1 != 0) 
			{
				if (bVar1 == 32) 
				{
					x = x + 4;
				}
				else 
				{
					index = AsciiTable[bVar1];

					if (index != -1) 
					{
						OUT_FONTINFO *pFontInfo = &fontinfo[index];

						setSprt(font);

						setRGB0(font, gFontColour.r, gFontColour.g, gFontColour.b);
						setXY0(font, x, pFontInfo->offy + iy);
						setUV0(font, pFontInfo->x, pFontInfo->y - 46);
						setWH(font, pFontInfo->width, pFontInfo->height);

						font->clut = fontclutid;

						addPrim(current->ot, font);
						font++;

						x += pFontInfo->width;
					}
				}

				bVar1 = *pbVar2;
			}
			iVar10++;
		} while (*string != 0);
	}

	POLY_FT3* null = (POLY_FT3*)font;

	setPolyFT3(null);
	setSemiTrans(null, 1);

	setXY3(null, -1, -1, -1, -1, -1, -1);

	null->tpage = fonttpage;
	addPrim(current->ot, null);

	current->primptr += sizeof(POLY_FT3);
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitButtonTextures()
 // line 713, offset 0x00074e54
	/* begin block 1 */
		// Start line: 715
		// Start offset: 0x00074E54
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x00074EB4
	// End Line: 719

	/* begin block 2 */
		// Start line: 2500
	/* end block 2 */
	// End Line: 2501

	/* begin block 3 */
		// Start line: 1426
	/* end block 3 */
	// End Line: 1427

	/* begin block 4 */
		// Start line: 2501
	/* end block 4 */
	// End Line: 2502

	/* begin block 5 */
		// Start line: 2503
	/* end block 5 */
	// End Line: 2504

/* WARNING: Unknown calling convention yet parameter storage is locked */

// [D] [A]
void InitButtonTextures(void)
{
	for (int i = 0; i < 11; i++)
		GetTextureDetails(button_names[i], &button_textures[i]);
}



// decompiled code
// original method signature: 
// int /*$ra*/ PrintScaledString(int y /*$s4*/, char *string /*$s1*/, int scale /*$s2*/)
 // line 726, offset 0x000745dc
	/* begin block 1 */
		// Start line: 727
		// Start offset: 0x000745DC
		// Variables:
	// 		struct FONT_DIGIT *pDigit; // $a2
	// 		struct POLY_FT4 *font; // $t0
	// 		int x; // $s0
	// 		int width; // $t3
	// 		int height; // $t6
	// 		int y0; // $t1
	// 		int x1; // $t5
	// 		int y1; // $v0
	// 		unsigned char vOff; // $t8
	// 		char c; // $a0
	/* end block 1 */
	// End offset: 0x00074858
	// End Line: 794

	/* begin block 2 */
		// Start line: 1580
	/* end block 2 */
	// End Line: 1581

	/* begin block 3 */
		// Start line: 1596
	/* end block 3 */
	// End Line: 1597

// [D] [A]
int PrintScaledString(int y, char *string, int scale)
{
	POLY_FT4 *font;
	int x;
	int width;
	int height;
	char vOff;
	char let;
	char convLet;

	width = StringWidth(string);
	width *= scale;

	font = (POLY_FT4 *)current->primptr;

	if (gShowMap != 0)
		font = (POLY_FT4 *)SetFontTPage(font);

	x = (320 - (width >> 4) >> 1);

	while ((let = *string++) != 0) 
	{
		convLet = (let - '0');

		if (let == ' ') 
		{
			width = scale;
			
			if (scale < 0)
				width = scale + 3;

			x += (width >> 2);
		}
		else if (convLet < 10)
		{
			FONT_DIGIT *pDigit = &fontDigit[convLet];

			if (convLet < 6)
			{
				vOff = 0;
				height = 28;
			}
			else
			{
				vOff = 28;
				height = 31;
			}

			int y1 = ((height >> 1) * scale) >> 4;
			int x1 = (pDigit->width * scale) >> 4;
			int y0 = (y - y1);

			setPolyFT4(font);

			setRGB0(font, gFontColour.r, gFontColour.g, gFontColour.b);
			setXYWH(font, x, y0, x1, height + y);
			setUVWH(font, digit_texture.coords.u0 + pDigit->xOffset, digit_texture.coords.v0 + vOff, pDigit->width, height);
			
			font->clut = digit_texture.clutid;
			font->tpage = digit_texture.tpageid;

			addPrim(current->ot, font);
			font++;

			x += x1;
		}
	}

	current->primptr = (char *)font;

	return x;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ GetNextWord(char *string /*$a0*/, char *word /*$a1*/)
 // line 800, offset 0x00074d54
	/* begin block 1 */
		// Start line: 801
		// Start offset: 0x00074D54
		// Variables:
	// 		char c; // $v1
	/* end block 1 */
	// End offset: 0x00074D94
	// End Line: 817

	/* begin block 2 */
		// Start line: 2336
	/* end block 2 */
	// End Line: 2337

	/* begin block 3 */
		// Start line: 2502
	/* end block 3 */
	// End Line: 2503

	/* begin block 4 */
		// Start line: 2505
	/* end block 4 */
	// End Line: 2506

// [D]
char * GetNextWord(char *string, char *word)
{
	char cVar1;

	cVar1 = *string;
	do {
		if (cVar1 == '\0')
		{
		LAB_00074d88:
			*word = '\0';
			return string;
		}

		string = string + 1;
		if (cVar1 == ' ')
		{
			*word = ' ';
			word = word + 1;
			goto LAB_00074d88;
		}

		*word = cVar1;
		cVar1 = *string;
		word = word + 1;
	} while (true);
}



// decompiled code
// original method signature: 
// void * /*$ra*/ DrawButton(unsigned char button /*$a0*/, void *prim /*$s1*/, int x /*$a2*/, int y /*$a3*/)
 // line 819, offset 0x00074858
	/* begin block 1 */
		// Start line: 820
		// Start offset: 0x00074858
		// Variables:
	// 		struct TEXTURE_DETAILS *btn; // $a1
	// 		struct POLY_FT3 *null; // $s0
	/* end block 1 */
	// End offset: 0x00074A10
	// End Line: 853

	/* begin block 2 */
		// Start line: 1807
	/* end block 2 */
	// End Line: 1808

	/* begin block 3 */
		// Start line: 1833
	/* end block 3 */
	// End Line: 1834

// [D] [A]
void* DrawButton(unsigned char button, void *prim, int x, int y)
{
	TEXTURE_DETAILS *btn;
	SPRT* sprt;
	POLY_FT3* null;

	btn = &button_textures[button - 0x80];
	sprt = (SPRT*)prim;
	 
	setSprt(sprt);
	setRGB0(sprt, 128, 128, 128);
	setXY0(sprt, x, y - 3);
	setUV0(sprt, btn->coords.u0, btn->coords.v0);
	setWH(sprt, btn->coords.u1 - btn->coords.u0, btn->coords.v2 - btn->coords.v0);

	sprt->clut = btn->clutid;

	null = (POLY_FT3*)(sprt + 1);

	setPolyFT3(null);
	setSemiTrans(null, 1);

	setXY3(null, -1, -1, -1, -1, -1, -1);

	null->tpage = btn->tpageid;

	if (gShowMap == 0)
	{
		addPrim(current->ot, sprt);
		addPrim(current->ot, null);
	}
	else 
	{
		DrawPrim(null);
		DrawPrim(sprt);
	}

	return null + 1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ SetFontTPage(void *prim /*$a0*/)
 // line 855, offset 0x00074d94
	/* begin block 1 */
		// Start line: 856
		// Start offset: 0x00074D94
		// Variables:
	// 		struct POLY_FT3 *null; // $s0
	/* end block 1 */
	// End offset: 0x00074E54
	// End Line: 871

	/* begin block 2 */
		// Start line: 2581
	/* end block 2 */
	// End Line: 2582

	/* begin block 3 */
		// Start line: 2620
	/* end block 3 */
	// End Line: 2621

// [D] [A]
void* SetFontTPage(void *prim)
{
	POLY_FT3* null = (POLY_FT3*)prim;

	setPolyFT3(null);
	setSemiTrans(null, 1);

	setXY3(null, -1, -1, -1, -1, -1, -1);

	null->tpage = fonttpage;

	if (gShowMap == 0) 
	{
		addPrim(current->ot, null);
	}
	else 
	{
		DrawPrim(prim);
	}

	return null + 1;
}





