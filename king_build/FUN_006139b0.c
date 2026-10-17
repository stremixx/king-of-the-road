
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_006139b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  float fVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  
  param_1[0x1b] = param_9;
  param_1[10] = param_5;
  param_1[0xb] = param_6;
  param_1[7] = param_2;
  param_1[8] = param_3;
  param_1[9] = param_4;
  puVar2 = (undefined4 *)FUN_00631d33(0x74);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_00651f2c;
    *(undefined2 *)(puVar2 + 0x10) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *(undefined2 *)((int)puVar2 + 0x2a) = 0;
    *(undefined2 *)(puVar2 + 10) = 0;
    puVar2[2] = 0;
    puVar2[0xf] = 0;
    DVar3 = timeGetTime();
    puVar2[0xc] = DVar3;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    *puVar2 = &PTR_FUN_006522dc;
    puVar2[1] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar2[0x1b] = param_7;
    puVar2[0x19] = 0;
    puVar2[0x1c] = param_8;
  }
  *param_1 = puVar2;
  FUN_00619f60(param_1 + 7,param_1[10],param_1[0xb]);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = _DAT_006522a8 / _DAT_0064b254;
  fVar1 = _DAT_006522ac / _DAT_0064b254;
  param_1[0x10] = 0x28;
  param_1[0x11] = 0x28;
  param_1[0xf] = fVar1;
  param_1[0x12] = _DAT_006522b0 * _DAT_006522d8;
  param_1[0x13] = _DAT_006522b4 * _DAT_006522d8;
  return param_1;
}

