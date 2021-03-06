/*
 * CORERIVER TOUCHCORE touchkey fw update
 *
 * Copyright (C) 2012 Samsung Electronics Co.Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */

#define DN_HDR_LEN	3
#define DN_BODY_LEN	864

#define COREREIVER_DOWNLOADER_ENTER		0xF0
#define COREREIVER_DOWNLOADER_EXIT		0xF1
#define COREREIVER_DOWNLOADER_WRITE		0xF2


unsigned char DN_Hdr[] = {0x02, 0x30, 0x00};
unsigned char DN_Body[]= {
	0x43, 0xF5, 0x80, 0xC2, 0xDC, 0x00, 0x20, 0xDC, 0xF7, 0x90,
	0xFF, 0x03, 0xE4, 0x93, 0xFF, 0xF4, 0xFE, 0x90, 0xFF, 0x02,
	0xE4, 0x93, 0xFD, 0xB5, 0x06, 0x04, 0x8D, 0x9A, 0x80, 0x03,
	0x75, 0x9A, 0x4C, 0x90, 0xFF, 0x05, 0xE4, 0x93, 0xFF, 0xF4,
	0xFE, 0x90, 0xFF, 0x04, 0xE4, 0x93, 0xFD, 0xB5, 0x06, 0x04,
	0x8D, 0x84, 0x80, 0x03, 0x75, 0x84, 0x04, 0x75, 0x8F, 0x01,
	0x75, 0xC7, 0x0E, 0x90, 0x00, 0x00, 0x7F, 0x90, 0x7E, 0x02,
	0xE4, 0xF0, 0xA3, 0xDF, 0xFC, 0xDE, 0xFA, 0x78, 0x7F, 0xE4,
	0xF6, 0xD8, 0xFD, 0x75, 0x81, 0x27, 0x02, 0x32, 0xCB, 0xAD,
	0x07, 0xAC, 0x06, 0xE4, 0xF5, 0x08, 0xF5, 0x09, 0x8D, 0x82,
	0x8C, 0x83, 0xE0, 0xF5, 0x0A, 0xA3, 0xE0, 0xFE, 0x8D, 0x82,
	0x8C, 0x83, 0xA3, 0xA3, 0xE0, 0xFB, 0xEE, 0xF5, 0x0B, 0xEB,
	0xF5, 0x0C, 0x8D, 0x82, 0x8C, 0x83, 0xA3, 0xA3, 0xA3, 0xE0,
	0xFE, 0xED, 0x24, 0x04, 0xF5, 0x82, 0xE4, 0x3C, 0xF5, 0x83,
	0xE0, 0xFB, 0xEE, 0xF5, 0x0D, 0xEB, 0xF5, 0x0E, 0xED, 0x24,
	0x05, 0xFF, 0xE4, 0x3C, 0xA9, 0x07, 0x75, 0x0F, 0x01, 0xF5,
	0x10, 0x89, 0x11, 0xE5, 0x0A, 0x24, 0x0F, 0x60, 0x3C, 0x14,
	0x60, 0x48, 0x24, 0x02, 0x60, 0x03, 0x02, 0x31, 0x3A, 0x12,
	0x33, 0x06, 0xE4, 0xF5, 0x08, 0xF5, 0x09, 0xC3, 0xE5, 0x08,
	0x94, 0x30, 0x50, 0x16, 0x7D, 0x01, 0xAF, 0x09, 0xAE, 0x08,
	0x12, 0x32, 0x39, 0xE4, 0x25, 0x09, 0xF5, 0x09, 0x74, 0x04,
	0x35, 0x08, 0xF5, 0x08, 0x80, 0xE3, 0x12, 0x33, 0x52, 0xE4,
	0x78, 0x24, 0xF6, 0x08, 0xF6, 0x78, 0x23, 0xF6, 0x22, 0x12,
	0x33, 0x06, 0x7D, 0x01, 0x7F, 0x00, 0x7E, 0x30, 0x12, 0x32,
	0x39, 0x02, 0x33, 0x52, 0x12, 0x33, 0x06, 0x78, 0x24, 0xE6,
	0xFE, 0x08, 0xE6, 0xFF, 0xAB, 0x0F, 0xAA, 0x10, 0xA9, 0x11,
	0x85, 0x0D, 0x17, 0x85, 0x0E, 0x18, 0x12, 0x31, 0xE2, 0x12,
	0x33, 0x52, 0x78, 0x24, 0xE6, 0xFE, 0x08, 0xE6, 0xFF, 0xAD,
	0x0E, 0xAC, 0x0D, 0x12, 0x32, 0x6E, 0x78, 0x25, 0xE6, 0x65,
	0x0C, 0x70, 0x04, 0x18, 0xE6, 0x65, 0x0B, 0x60, 0x04, 0x78,
	0x22, 0x76, 0x01, 0x78, 0x25, 0xE5, 0x0E, 0x26, 0xF6, 0x18,
	0xE5, 0x0D, 0x36, 0xF6, 0x22, 0x20, 0xFF, 0x03, 0x02, 0x31,
	0xE1, 0x53, 0xA1, 0xBF, 0x43, 0xF9, 0x20, 0x30, 0xFD, 0x0E,
	0x30, 0xFF, 0x05, 0xC2, 0xFF, 0x43, 0xF9, 0x20, 0x30, 0xFA,
	0xF5, 0x02, 0x31, 0xD9, 0x30, 0xFC, 0x44, 0x78, 0x22, 0xE6,
	0xF5, 0xFC, 0xC2, 0xFF, 0x78, 0x20, 0x76, 0x01, 0x78, 0x27,
	0xE6, 0xF8, 0xC0, 0x00, 0x78, 0x20, 0xE6, 0x06, 0xD0, 0x00,
	0x28, 0xF8, 0xE6, 0x78, 0x21, 0xF6, 0x43, 0xFA, 0x02, 0x30,
	0xFF, 0x1C, 0x78, 0x21, 0xE6, 0xF5, 0xFC, 0x43, 0xF9, 0x20,
	0xC2, 0xFF, 0x78, 0x27, 0xE6, 0xF8, 0xC0, 0x00, 0x78, 0x20,
	0xE6, 0x06, 0xD0, 0x00, 0x28, 0xF8, 0xE6, 0x78, 0x21, 0xF6,
	0x30, 0xFA, 0xDE, 0x80, 0x3A, 0x43, 0xF9, 0x20, 0xC2, 0xFF,
	0xE4, 0x78, 0x20, 0xF6, 0x30, 0xFF, 0xFD, 0x43, 0xFA, 0x02,
	0x78, 0x21, 0xA6, 0xFC, 0x43, 0xF9, 0x20, 0xC2, 0xFF, 0xE6,
	0xFF, 0x18, 0xE6, 0x24, 0x00, 0xF5, 0x82, 0xE4, 0x34, 0x00,
	0xF5, 0x83, 0xEF, 0xF0, 0x06, 0x20, 0xFF, 0x03, 0x30, 0xFA,
	0xFA, 0x30, 0xFA, 0xDE, 0xC2, 0xFF, 0x7E, 0x00, 0x7F, 0x00,
	0x12, 0x30, 0x59, 0xC2, 0xFF, 0x43, 0xF9, 0x20, 0x53, 0xFA,
	0xFD, 0x22, 0x8B, 0x14, 0x8A, 0x15, 0x89, 0x16, 0xE4, 0xF5,
	0x19, 0xF5, 0x1A, 0x8E, 0x1B, 0x8F, 0x1C, 0xF5, 0xF4, 0xF5,
	0xF3, 0x75, 0xF2, 0xF0, 0xAB, 0x14, 0xAA, 0x15, 0xA9, 0x16,
	0x85, 0x1A, 0x82, 0x85, 0x19, 0x83, 0x12, 0x32, 0x9E, 0xF5,
	0x1D, 0x75, 0xF1, 0x80, 0xE5, 0x1C, 0xF5, 0x82, 0xE5, 0x1B,
	0xF5, 0x83, 0xE5, 0x1D, 0x12, 0xFF, 0x10, 0x05, 0x1A, 0xE5,
	0x1A, 0x70, 0x02, 0x05, 0x19, 0x05, 0x1C, 0xE5, 0x1C, 0x70,
	0x02, 0x05, 0x1B, 0xC3, 0xE5, 0x1A, 0x95, 0x18, 0xE5, 0x19,
	0x95, 0x17, 0x40, 0xC4, 0xAE, 0x1B, 0xAF, 0x1C, 0x22, 0x8E,
	0x12, 0x8F, 0x13, 0x8D, 0x14, 0xE5, 0x14, 0x70, 0x03, 0x75,
	0x14, 0x01, 0xE4, 0xF5, 0xF4, 0x75, 0xF3, 0x7F, 0x75, 0xF2,
	0x12, 0x75, 0xF1, 0x80, 0xE5, 0x13, 0xF5, 0x82, 0xE5, 0x12,
	0xF5, 0x83, 0x12, 0xFF, 0x00, 0xE4, 0x25, 0x13, 0xF5, 0x13,
	0x74, 0x04, 0x35, 0x12, 0xF5, 0x12, 0xD5, 0x14, 0xE4, 0x7F,
	0x00, 0x22, 0x8E, 0x12, 0x8F, 0x13, 0x8C, 0x14, 0x8D, 0x15,
	0xE4, 0xF9, 0xFF, 0xFE, 0xC3, 0xEF, 0x95, 0x15, 0xEE, 0x95,
	0x14, 0x50, 0x15, 0xE5, 0x13, 0x2F, 0xF5, 0x82, 0xE5, 0x12,
	0x3E, 0xF5, 0x83, 0xE4, 0x93, 0x29, 0xF9, 0x0F, 0xBF, 0x00,
	0x01, 0x0E, 0x80, 0xE2, 0x78, 0x23, 0xE9, 0x26, 0xF6, 0x22,
	0xBB, 0x01, 0x0C, 0xE5, 0x82, 0x29, 0xF5, 0x82, 0xE5, 0x83,
	0x3A, 0xF5, 0x83, 0xE0, 0x22, 0x50, 0x06, 0xE9, 0x25, 0x82,
	0xF8, 0xE6, 0x22, 0xBB, 0xFE, 0x06, 0xE9, 0x25, 0x82, 0xF8,
	0xE2, 0x22, 0xE5, 0x82, 0x29, 0xF5, 0x82, 0xE5, 0x83, 0x3A,
	0xF5, 0x83, 0xE4, 0x93, 0x22, 0x12, 0x33, 0x22, 0x12, 0x32,
	0xE9, 0x12, 0x33, 0x45, 0x12, 0x33, 0x36, 0x43, 0xD4, 0x08,
	0x53, 0xDC, 0xF7, 0x53, 0xE4, 0xF7, 0xD2, 0xB3, 0x12, 0x31,
	0x3B, 0xD2, 0xD8, 0x80, 0xF9, 0x78, 0x27, 0x76, 0x22, 0x43,
	0xB1, 0x40, 0x53, 0xFA, 0xF7, 0x53, 0xFA, 0xFB, 0x43, 0xF9,
	0x02, 0x43, 0xF9, 0x01, 0x53, 0xF9, 0xBF, 0x75, 0xFB, 0x40,
	0x53, 0xFA, 0xFD, 0x22, 0x90, 0xFF, 0xFF, 0xE4, 0x93, 0xF5,
	0x8F, 0x43, 0xCE, 0x01, 0x75, 0xC6, 0x0E, 0xC2, 0xAF, 0x75,
	0xF7, 0xC1, 0x75, 0xF7, 0x1E, 0x75, 0xF7, 0xEC, 0x75, 0xF7,
	0x81, 0x22, 0xC2, 0xAF, 0x43, 0x85, 0x03, 0x43, 0xC4, 0x04,
	0x43, 0x91, 0x01, 0x75, 0xC6, 0x0E, 0xE4, 0xF5, 0xC7, 0xC2,
	0xAF, 0x22, 0xD2, 0xDF, 0xC2, 0xDA, 0x53, 0x8E, 0x1F, 0x43,
	0x8E, 0x40, 0xD2, 0xD8, 0xD2, 0xD9, 0x22, 0xE4, 0x78, 0x22,
	0xF6, 0x08, 0xF6, 0x08, 0xF6, 0x08, 0xF6, 0x08, 0xF6, 0x22,
	0x53, 0xF7, 0xFE, 0x53, 0xCE, 0xFE, 0x75, 0x8F, 0x01, 0x22,
	0xFF, 0xFF, 0xFF, 0xFF
};
