
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006274f5(void)

{
  char cVar1;
  char cVar2;
  char *_Str1;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  char *_Source;
  int local_8;
  
  FUN_006238a4(0xc);
  DAT_00688378 = 0xffffffff;
  DAT_00688368 = 0xffffffff;
  DAT_0072d310 = 0;
  _Str1 = (char *)FUN_0062919a(&DAT_006541d4);
  if (_Str1 == (char *)0x0) {
    FUN_00623905(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_0072d318);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_006882d0 = DAT_0072d318 * 0x3c;
    DAT_0072d310 = 1;
    if (DAT_0072d35e != 0) {
      DAT_006882d0 = DAT_006882d0 + DAT_0072d36c * 0x3c;
    }
    if ((DAT_0072d3b2 == 0) || (DAT_0072d3c0 == 0)) {
      DAT_006882d4 = 0;
      _DAT_006882d8 = 0;
    }
    else {
      DAT_006882d4 = 1;
      _DAT_006882d8 = (DAT_0072d3c0 - DAT_0072d36c) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_0072d1d4,0x220,(LPCWSTR)&DAT_0072d31c,-1,PTR_DAT_0068835c,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_0068835c = 0;
    }
    else {
      PTR_DAT_0068835c[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_0072d1d4,0x220,(LPCWSTR)&DAT_0072d370,-1,PTR_DAT_00688360,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_00688360[0x3f] = 0;
      return;
    }
LAB_00627766:
    *PTR_DAT_00688360 = 0;
  }
  else {
    if ((*_Str1 != '\0') &&
       ((DAT_0072d3c4 == (char *)0x0 || (iVar4 = _strcmp(_Str1,DAT_0072d3c4), iVar4 != 0)))) {
      FUN_0061c888(DAT_0072d3c4);
      sVar5 = _strlen(_Str1);
      DAT_0072d3c4 = _malloc(sVar5 + 1);
      if (DAT_0072d3c4 != (char *)0x0) {
        FUN_0061e950(DAT_0072d3c4,_Str1);
        FUN_00623905(0xc);
        _strncpy(PTR_DAT_0068835c,_Str1,3);
        _Source = _Str1 + 3;
        PTR_DAT_0068835c[3] = 0;
        cVar1 = *_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 4;
        }
        iVar4 = FUN_0061f2c2(_Source);
        DAT_006882d0 = iVar4 * 0xe10;
        for (; (cVar2 = *_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = _Source + 1) {
        }
        if (*_Source == ':') {
          _Source = _Source + 1;
          iVar4 = FUN_0061f2c2(_Source);
          DAT_006882d0 = DAT_006882d0 + iVar4 * 0x3c;
          for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
          }
          if (*_Source == ':') {
            _Source = _Source + 1;
            iVar4 = FUN_0061f2c2(_Source);
            DAT_006882d0 = DAT_006882d0 + iVar4;
            for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_006882d0 = -DAT_006882d0;
        }
        DAT_006882d4 = (int)*_Source;
        if (DAT_006882d4 != 0) {
          _strncpy(PTR_DAT_00688360,_Source,3);
          PTR_DAT_00688360[3] = 0;
          return;
        }
        goto LAB_00627766;
      }
    }
    FUN_00623905(0xc);
  }
  return;
}

