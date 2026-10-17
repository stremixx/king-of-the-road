
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a8560(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,int param_7,undefined4 param_8)

{
  double dVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if (_DAT_0064a590 <= _DAT_006fa348) {
    if (_DAT_006fa348 < _DAT_0064ca48) {
      if (_DAT_0064a590 <= _DAT_006fa340) {
        if (_DAT_006fa340 < _DAT_0064ca48) {
          FUN_005a8470(param_1,param_2,param_3,&local_24,DAT_006fa330 * 0x60 + param_7,param_8);
          FUN_005a8470(param_1,param_2,param_3,local_18,DAT_006fa338 * 0x60 + param_7,param_8);
          FUN_005a8400(local_18,&local_24,(float)_DAT_006fa340,&local_24);
          FUN_005a8470(param_1,param_2,param_3,local_18,DAT_006fa334 * 0x60 + param_7,param_8);
          FUN_005a8470(param_1,param_2,param_3,local_c,DAT_006fa33c * 0x60 + param_7,param_8);
          FUN_005a8400(local_c,local_18,(float)_DAT_006fa340,local_18);
          dVar1 = _DAT_006fa348;
          goto LAB_005a8755;
        }
        FUN_005a8470(param_1,param_2,param_3,&local_24,DAT_006fa338 * 0x60 + param_7,param_8);
        iVar2 = DAT_006fa33c;
      }
      else {
        FUN_005a8470(param_1,param_2,param_3,&local_24,DAT_006fa330 * 0x60 + param_7,param_8);
        iVar2 = DAT_006fa334;
      }
      FUN_005a8470(param_1,param_2,param_3,local_18,iVar2 * 0x60 + param_7,param_8);
      dVar1 = _DAT_006fa348;
      goto LAB_005a8755;
    }
    iVar2 = DAT_006fa334;
    if ((_DAT_0064a590 <= _DAT_006fa340) && (iVar2 = DAT_006fa33c, _DAT_006fa340 < _DAT_0064ca48)) {
      FUN_005a8470(param_1,param_2,param_3,&local_24,DAT_006fa334 * 0x60 + param_7,param_8);
      iVar2 = DAT_006fa33c;
      goto LAB_005a881d;
    }
  }
  else {
    iVar2 = DAT_006fa330;
    if ((_DAT_0064a590 <= _DAT_006fa340) && (iVar2 = DAT_006fa338, _DAT_006fa340 < _DAT_0064ca48)) {
      FUN_005a8470(param_1,param_2,param_3,&local_24,DAT_006fa330 * 0x60 + param_7,param_8);
      iVar2 = DAT_006fa338;
LAB_005a881d:
      FUN_005a8470(param_1,param_2,param_3,local_18,iVar2 * 0x60 + param_7,param_8);
      dVar1 = _DAT_006fa340;
LAB_005a8755:
      FUN_005a8400(local_18,&local_24,(float)dVar1,&local_24);
      goto LAB_005a887d;
    }
  }
  FUN_005a8470(param_1,param_2,param_3,&local_24,iVar2 * 0x60 + param_7,param_8);
LAB_005a887d:
  *param_4 = local_24;
  *param_5 = local_20;
  *param_6 = local_1c;
  return;
}

