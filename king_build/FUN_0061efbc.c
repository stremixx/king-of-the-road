
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0061efbc(byte *param_1,undefined4 *param_2)

{
  uint uVar1;
  size_t sVar2;
  uint *puVar3;
  undefined4 *puVar4;
  byte *_Str;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_24 [24];
  double local_c;
  
  _Str = param_1;
  while( true ) {
    if (DAT_00687ea4 < 2) {
      uVar1 = (byte)PTR_DAT_00687c98[(uint)*_Str * 2] & 8;
    }
    else {
      uVar1 = FUN_00624e08(*_Str,8);
    }
    if (uVar1 == 0) break;
    _Str = _Str + 1;
  }
  uVar7 = 0;
  uVar6 = 0;
  sVar2 = _strlen((char *)_Str);
  puVar3 = (uint *)FUN_00625dba(local_24,_Str,sVar2,uVar6,uVar7);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = _Str + puVar3[1];
  }
  uVar1 = *puVar3;
  if ((uVar1 & 0x240) == 0) {
    if ((uVar1 & 0x81) == 0) {
      if ((uVar1 & 0x100) == 0) {
        return (float10)*(double *)(puVar3 + 4);
      }
      local_c = 0.0;
    }
    else {
      local_c = _DAT_00685538;
      if (*_Str == 0x2d) {
        local_c = -_DAT_00685538;
      }
    }
    puVar4 = (undefined4 *)FUN_006204a3();
    fVar5 = (float10)local_c;
    *puVar4 = 0x22;
  }
  else {
    fVar5 = (float10)0;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
  }
  return fVar5;
}

