
undefined4 * __thiscall
FUN_006059f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float10 fVar3;
  
  puVar1 = (undefined4 *)FUN_00631d33(0x3c);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1 + 1;
    puVar1[2] = puVar2;
    *puVar2 = puVar2;
    puVar1[3] = &PTR_LAB_00651e38;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xb] = 0;
    puVar1[0xe] = 0;
    puVar1[10] = 0;
    *puVar1 = &PTR_FUN_00651e3c;
    puVar2 = puVar1;
  }
  puVar2[6] = param_4;
  puVar2[4] = param_2;
  puVar2[5] = param_3;
  puVar2[9] = param_5;
  *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
  fVar3 = (float10)(**(code **)(**(int **)(param_1 + 4) + 0x24))(param_2,param_3,param_4,puVar2 + 3)
  ;
  puVar2[7] = (float)fVar3;
  FUN_0060ec00(puVar2);
  return puVar2;
}

