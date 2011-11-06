/*
 * helper.h
 *
 *  Created on: 03.11.2011
 *      Author: ich
 */

#ifndef HELPER_H_
#define HELPER_H_


HRESULT __fastcall UnicodeToAnsi(LPCOLESTR pszW, LPSTR* ppszA);
HRESULT __fastcall AnsiToUnicode(LPCSTR pszA, LPOLESTR* ppszW);

#endif /* HELPER_H_ */
