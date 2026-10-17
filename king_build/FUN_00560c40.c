
void __fastcall FUN_00560c40(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  param_1[0x377] = 0;
  param_1[0x18] = 0;
  puVar3 = &DAT_00701550;
  puVar4 = param_1;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_00701550;
  puVar4 = param_1 + 0xc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x329] = 3;
  param_1[0x32a] = 0;
  param_1[0x32c] = 0;
  param_1[0x32d] = 0;
  param_1[0x32e] = DAT_007015b0;
  param_1[0x32f] = DAT_007015b4;
  uVar1 = DAT_007015b8;
  param_1[0x331] = 0x43960000;
  param_1[0x376] = 0xffffffff;
  param_1[0x330] = uVar1;
  param_1[0x333] = 0;
  param_1[0x344] = 0;
  param_1[0x345] = 0;
  param_1[0x346] = 0;
  FUN_00560d00();
  return;
}

