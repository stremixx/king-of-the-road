
undefined4 * __thiscall
FUN_0060d250(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00631d33(0x58);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 0xd) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined2 *)((int)puVar1 + 0x26) = 0;
    *(undefined2 *)(puVar1 + 9) = 0;
    puVar1[2] = 0;
    puVar1[0xc] = 0;
    puVar1[1] = 0;
    puVar1[0x15] = 0;
    *puVar1 = &PTR_FUN_00651fe8;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    DVar2 = timeGetTime();
    puVar1[0x14] = DVar2;
    puVar3 = puVar1;
  }
  *param_1 = puVar3;
  puVar3[0xe] = param_2;
  puVar3[0xf] = param_3;
  puVar3[0x10] = param_4;
  puVar3[0x11] = 0x3f800000;
  puVar3[0x12] = 0x3f800000;
  puVar3[0x13] = 0;
  FUN_0060f5c0(&param_2,param_5,param_6,param_8);
  FUN_0060f2f0(0x41000000,0,0);
  return param_1;
}

