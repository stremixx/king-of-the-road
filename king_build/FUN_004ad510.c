
int **** __thiscall FUN_004ad510(int ****param_1,char *param_2,undefined1 *param_3)

{
  int ****ppppiVar1;
  int ***pppiVar2;
  int ***pppiVar3;
  int *piVar4;
  int iVar5;
  int ****ppppiVar6;
  uint uVar7;
  int ****ppppiStack_74;
  int ****ppppiStack_70;
  int ****ppppiStack_6c;
  int ***pppiStack_68;
  int ***pppiStack_64;
  int **local_48;
  undefined1 *local_44;
  int ***local_40;
  int ***pppiStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  int ***pppiStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  int **appiStack_24 [2];
  uint uStack_1c;
  int ***local_18 [2];
  uint uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_006437d9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int ***)0x0;
  param_1[2] = (int ***)0x0;
  param_1[3] = (int ***)0x0;
  param_1[1] = (int ***)&PTR_LAB_0064aec0;
  param_1[4] = (int ***)0x0;
  param_1[5] = (int ***)0x0;
  param_1[7] = (int ***)0x0;
  param_1[8] = (int ***)0x0;
  param_1[6] = (int ***)&PTR_LAB_0064aec0;
  param_1[9] = (int ***)0x0;
  param_1[10] = (int ***)0x0;
  pppiStack_64 = (int ***)0xc;
  local_4 = 1;
  uStack_3 = 0;
  pppiStack_68 = (int ***)0x4ad56c;
  local_40 = (int ***)param_1;
  pppiVar2 = (int ***)FUN_0044b6e0();
  param_1[0xb] = pppiVar2;
  *pppiVar2 = (int **)pppiVar2;
  param_1[0xb][1] = (int **)param_1[0xb];
  ppppiVar6 = param_1 + 0xc;
  *ppppiVar6 = (int ***)0x0;
  param_1[0xd] = (int ***)0x0;
  param_1[0xe] = (int ***)0x0;
  param_1[0xf] = (int ***)0x0;
  param_1[0x10] = (int ***)0x0;
  param_1[0x11] = (int ***)0x0;
  param_1[0x12] = (int ***)0x0;
  param_1[0x13] = (int ***)0x0;
  param_1[0x14] = (int ***)0x0;
  param_1[0x15] = (int ***)0x0;
  param_1[0x16] = (int ***)0x0;
  param_1[0x17] = (int ***)0x0;
  param_1[0x18] = (int ***)0x0;
  param_1[0x19] = (int ***)0x0;
  param_1[0x1a] = (int ***)0x0;
  ppppiVar1 = param_1 + 0x1b;
  *ppppiVar1 = (int ***)0x0;
  param_1[0x1c] = (int ***)0x0;
  param_1[0x1d] = (int ***)0x0;
  param_1[0x1e] = (int ***)0x0;
  param_1[0x41f] = (int ***)0x0;
  param_1[0x420] = (int ***)0x0;
  param_1[0x421] = (int ***)0x0;
  param_1[0x422] = (int ***)0x0;
  pppiStack_68 = *ppppiVar1;
  local_4 = 9;
  if ((uint)(((int)param_1[0x1d] - (int)pppiStack_68) / 0x2c) < 0x100) {
    local_44 = (undefined1 *)(((int)param_1[0x1c] - (int)pppiStack_68) / 0x2c);
    pppiStack_64 = param_1[0x1c];
    ppppiStack_6c = (int ****)0x100;
    ppppiStack_70 = (int ****)0x4ad623;
    local_48 = (int **)FUN_004aaff0();
    pppiVar2 = param_1[0x1c];
    for (pppiVar3 = *ppppiVar1; pppiVar3 != pppiVar2; pppiVar3 = pppiVar3 + 0xb) {
      pppiStack_64 = (int ***)0x0;
      pppiStack_68 = (int ***)0x4ad642;
      (*(code *)(*pppiVar3)[1])();
    }
    pppiStack_68 = *ppppiVar1;
    iVar5 = ((int)param_1[0x1d] - (int)pppiStack_68) / 0x2c;
    if (iVar5 != 0) {
      pppiStack_64 = (int ***)(iVar5 * 0x2c);
      ppppiStack_6c = (int ****)0x4ad67f;
      FUN_0044b440();
    }
    *ppppiVar1 = (int ***)local_48;
    param_1[0x1c] = (int ***)(local_48 + (int)local_44 * 0xb);
    param_1[0x1d] = (int ***)(local_48 + 0xb00);
  }
  param_1[4] = (int ***)(param_1 + 6);
  param_1[10] = (int ***)(param_1 + 1);
  ppppiStack_6c = local_18;
  pppiStack_68 = (int ***)0x0;
  param_1[5] = (int ***)0x0;
  param_1[9] = (int ***)0x0;
  ppppiStack_70 = (int ****)0x4ad6bf;
  pppiStack_64 = (int ***)param_1;
  pppiStack_64 = (int ***)FUN_004a2930();
  local_4 = 10;
  pppiStack_68 = (int ***)0x4ad6cf;
  FUN_0040c060();
  local_4 = 9;
  pppiStack_64 = (int ***)0x4ad6dd;
  FUN_00492340();
  pppiStack_68 = (int ***)local_18;
  pppiStack_64 = (int ***)0x0;
  ppppiStack_6c = (int ****)0x4ad6e8;
  piVar4 = (int *)FUN_004b0150();
  pppiStack_64 = (int ***)piVar4[2];
  local_44 = (undefined1 *)&ppppiStack_6c;
  if (((uint)pppiStack_64 & 0x10000) == 0) {
    pppiStack_68 = (int ***)0x0;
    ppppiStack_6c = (int ****)*piVar4;
    if (ppppiStack_6c == (int ****)0x0) {
      ppppiStack_6c = (int ****)0x0;
      pppiStack_64 = (int ***)0x0;
    }
    else {
      pppiStack_64 = (int ***)piVar4[2];
      ppppiStack_6c[1] = (int ***)((int)ppppiStack_6c[1] + 1);
    }
  }
  else {
    ppppiStack_6c = (int ****)*piVar4;
    pppiStack_68 = (int ***)piVar4[1];
  }
  ppppiStack_70 = (int ****)s_lambda_006702f8;
  local_4 = 0xb;
  ppppiStack_74 = param_1;
  FUN_004b8250();
  FUN_004a3fc0();
  local_4 = 9;
  pppiStack_64 = (int ***)0x4ad74e;
  FUN_00492340();
  pppiStack_68 = (int ***)local_18;
  pppiStack_64 = (int ***)0x0;
  ppppiStack_6c = (int ****)0x4ad759;
  piVar4 = (int *)FUN_004aab10();
  pppiStack_64 = (int ***)piVar4[2];
  local_44 = (undefined1 *)&ppppiStack_6c;
  if (((uint)pppiStack_64 & 0x10000) == 0) {
    pppiStack_68 = (int ***)0x0;
    ppppiStack_6c = (int ****)*piVar4;
    if (ppppiStack_6c == (int ****)0x0) {
      ppppiStack_6c = (int ****)0x0;
      pppiStack_64 = (int ***)0x0;
    }
    else {
      pppiStack_64 = (int ***)piVar4[2];
      ppppiStack_6c[1] = (int ***)((int)ppppiStack_6c[1] + 1);
    }
  }
  else {
    ppppiStack_6c = (int ****)*piVar4;
    pppiStack_68 = (int ***)piVar4[1];
  }
  ppppiStack_70 = (int ****)s_begin_006702f0;
  local_4 = 0xd;
  ppppiStack_74 = param_1;
  FUN_004b8250();
  FUN_004a3fc0();
  local_4 = 9;
  pppiStack_64 = (int ***)0x4ad7ba;
  FUN_00492340();
  pppiStack_68 = (int ***)local_18;
  pppiStack_64 = (int ***)0x0;
  ppppiStack_6c = (int ****)0x4ad7c5;
  piVar4 = (int *)FUN_004b0230();
  pppiStack_64 = (int ***)piVar4[2];
  local_44 = (undefined1 *)&ppppiStack_6c;
  if (((uint)pppiStack_64 & 0x10000) == 0) {
    pppiStack_68 = (int ***)0x0;
    ppppiStack_6c = (int ****)*piVar4;
    if (ppppiStack_6c == (int ****)0x0) {
      ppppiStack_6c = (int ****)0x0;
      pppiStack_64 = (int ***)0x0;
    }
    else {
      pppiStack_64 = (int ***)piVar4[2];
      ppppiStack_6c[1] = (int ***)((int)ppppiStack_6c[1] + 1);
    }
  }
  else {
    ppppiStack_6c = (int ****)*piVar4;
    pppiStack_68 = (int ***)piVar4[1];
  }
  ppppiStack_70 = (int ****)s_define_006702e8;
  local_4 = 0xf;
  ppppiStack_74 = param_1;
  FUN_004b8250();
  FUN_004a3fc0();
  local_4 = 9;
  pppiStack_64 = (int ***)0x4ad826;
  FUN_00492340();
  pppiStack_68 = (int ***)local_18;
  pppiStack_64 = (int ***)0x0;
  ppppiStack_6c = (int ****)0x4ad831;
  piVar4 = (int *)FUN_004b0310();
  pppiStack_64 = (int ***)piVar4[2];
  local_44 = (undefined1 *)&ppppiStack_6c;
  if (((uint)pppiStack_64 & 0x10000) == 0) {
    pppiStack_68 = (int ***)0x0;
    ppppiStack_6c = (int ****)*piVar4;
    if (ppppiStack_6c == (int ****)0x0) {
      ppppiStack_6c = (int ****)0x0;
      pppiStack_64 = (int ***)0x0;
    }
    else {
      pppiStack_64 = (int ***)piVar4[2];
      ppppiStack_6c[1] = (int ***)((int)ppppiStack_6c[1] + 1);
    }
  }
  else {
    ppppiStack_6c = (int ****)*piVar4;
    pppiStack_68 = (int ***)piVar4[1];
  }
  ppppiStack_70 = (int ****)&DAT_006702e4;
  local_4 = 0x11;
  ppppiStack_74 = param_1;
  FUN_004b8250();
  FUN_004a3fc0();
  local_4 = 9;
  pppiStack_64 = (int ***)0x4ad892;
  FUN_00492340();
  pppiStack_68 = (int ***)local_18;
  pppiStack_64 = (int ***)0x0;
  ppppiStack_6c = (int ****)0x4ad89d;
  piVar4 = (int *)FUN_004b03f0();
  pppiStack_64 = (int ***)piVar4[2];
  local_44 = (undefined1 *)&ppppiStack_6c;
  if (((uint)pppiStack_64 & 0x10000) == 0) {
    pppiStack_68 = (int ***)0x0;
    ppppiStack_6c = (int ****)*piVar4;
    if (ppppiStack_6c == (int ****)0x0) {
      ppppiStack_6c = (int ****)0x0;
      pppiStack_64 = (int ***)0x0;
    }
    else {
      pppiStack_64 = (int ***)piVar4[2];
      ppppiStack_6c[1] = (int ***)((int)ppppiStack_6c[1] + 1);
    }
  }
  else {
    ppppiStack_6c = (int ****)*piVar4;
    pppiStack_68 = (int ***)piVar4[1];
  }
  ppppiStack_70 = (int ****)0x64af50;
  local_4 = 0x13;
  ppppiStack_74 = param_1;
  FUN_004b8250();
  FUN_004a3fc0();
  local_4 = 9;
  pppiStack_64 = (int ***)0x4ad8fe;
  FUN_00492340();
  pppiStack_68 = (int ***)local_18;
  pppiStack_64 = (int ***)0x0;
  ppppiStack_6c = (int ****)0x4ad909;
  piVar4 = (int *)FUN_004b04d0();
  pppiStack_64 = (int ***)piVar4[2];
  local_44 = (undefined1 *)&ppppiStack_6c;
  if (((uint)pppiStack_64 & 0x10000) == 0) {
    pppiStack_68 = (int ***)0x0;
    ppppiStack_6c = (int ****)*piVar4;
    if (ppppiStack_6c == (int ****)0x0) {
      ppppiStack_6c = (int ****)0x0;
      pppiStack_64 = (int ***)0x0;
    }
    else {
      pppiStack_64 = (int ***)piVar4[2];
      ppppiStack_6c[1] = (int ***)((int)ppppiStack_6c[1] + 1);
    }
  }
  else {
    ppppiStack_6c = (int ****)*piVar4;
    pppiStack_68 = (int ***)piVar4[1];
  }
  ppppiStack_70 = (int ****)&DAT_006702dc;
  local_4 = 0x15;
  ppppiStack_74 = param_1;
  FUN_004b8250();
  FUN_004a3fc0();
  local_4 = 9;
  pppiStack_64 = (int ***)0x4ad96a;
  FUN_00492340();
  pppiStack_68 = (int ***)local_18;
  pppiStack_64 = (int ***)0x0;
  ppppiStack_6c = (int ****)0x4ad975;
  piVar4 = (int *)FUN_004b05b0();
  pppiStack_64 = (int ***)piVar4[2];
  local_44 = (undefined1 *)&ppppiStack_6c;
  if (((uint)pppiStack_64 & 0x10000) == 0) {
    pppiStack_68 = (int ***)0x0;
    ppppiStack_6c = (int ****)*piVar4;
    if (ppppiStack_6c == (int ****)0x0) {
      ppppiStack_6c = (int ****)0x0;
      pppiStack_64 = (int ***)0x0;
    }
    else {
      pppiStack_64 = (int ***)piVar4[2];
      ppppiStack_6c[1] = (int ***)((int)ppppiStack_6c[1] + 1);
    }
  }
  else {
    ppppiStack_6c = (int ****)*piVar4;
    pppiStack_68 = (int ***)piVar4[1];
  }
  ppppiStack_70 = (int ****)&DAT_006702d4;
  local_4 = 0x17;
  ppppiStack_74 = param_1;
  FUN_004b8250();
  FUN_004a3fc0();
  local_4 = 9;
  pppiStack_64 = (int ***)0x4ad9d6;
  FUN_00492340();
  pppiStack_68 = (int ***)local_18;
  pppiStack_64 = (int ***)0x0;
  ppppiStack_6c = (int ****)0x4ad9e1;
  piVar4 = (int *)FUN_004b0690();
  pppiStack_64 = (int ***)piVar4[2];
  local_44 = (undefined1 *)&ppppiStack_6c;
  if (((uint)pppiStack_64 & 0x10000) == 0) {
    pppiStack_68 = (int ***)0x0;
    ppppiStack_6c = (int ****)*piVar4;
    if (ppppiStack_6c == (int ****)0x0) {
      ppppiStack_6c = (int ****)0x0;
      pppiStack_64 = (int ***)0x0;
    }
    else {
      pppiStack_64 = (int ***)piVar4[2];
      ppppiStack_6c[1] = (int ***)((int)ppppiStack_6c[1] + 1);
    }
  }
  else {
    ppppiStack_6c = (int ****)*piVar4;
    pppiStack_68 = (int ***)piVar4[1];
  }
  ppppiStack_70 = (int ****)s_call_with_current_continuation_006702b4;
  local_4 = 0x19;
  ppppiStack_74 = param_1;
  FUN_004b8250();
  FUN_004a3fc0();
  local_4 = 9;
  pppiStack_64 = (int ***)0x4ada42;
  FUN_00492340();
  pppiStack_68 = (int ***)local_18;
  pppiStack_64 = (int ***)0x0;
  ppppiStack_6c = (int ****)0x4ada4d;
  piVar4 = (int *)FUN_004b0770();
  pppiStack_64 = (int ***)piVar4[2];
  local_44 = (undefined1 *)&ppppiStack_6c;
  if (((uint)pppiStack_64 & 0x10000) == 0) {
    pppiStack_68 = (int ***)0x0;
    ppppiStack_6c = (int ****)*piVar4;
    if (ppppiStack_6c == (int ****)0x0) {
      ppppiStack_6c = (int ****)0x0;
      pppiStack_64 = (int ***)0x0;
    }
    else {
      pppiStack_64 = (int ***)piVar4[2];
      ppppiStack_6c[1] = (int ***)((int)ppppiStack_6c[1] + 1);
    }
  }
  else {
    ppppiStack_6c = (int ****)*piVar4;
    pppiStack_68 = (int ***)piVar4[1];
  }
  ppppiStack_70 = (int ****)s_apply_006702ac;
  local_4 = 0x1b;
  ppppiStack_74 = param_1;
  FUN_004b8250();
  FUN_004a3fc0();
  local_4 = 9;
  pppiStack_64 = (int ***)0x4adaae;
  FUN_00492340();
  pppiStack_64 = (int ***)FUN_004a0430;
  pppiStack_68 = (int ***)s_internal_macro_expand_0066f9d4;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00491db0;
  pppiStack_68 = (int ***)&DAT_0066f640;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00492370;
  pppiStack_68 = (int ***)&DAT_0066f658;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00493220;
  pppiStack_68 = (int ***)s_equal__0066f65c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004933d0;
  pppiStack_68 = (int ***)s_number__0066f664;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004934f0;
  pppiStack_68 = (int ***)s_complex__0066f66c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00493610;
  pppiStack_68 = (int ***)s_real__0066f678;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00493840;
  pppiStack_68 = (int ***)s_rational__0066f680;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00493a70;
  pppiStack_68 = (int ***)s_integer__0066f68c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00493ca0;
  pppiStack_68 = (int ***)s_exact__0066f698;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00493ed0;
  pppiStack_68 = (int ***)s_inexact__0066f6a0;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00494100;
  pppiStack_68 = (int ***)&DAT_006702a8;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)&LAB_00494450;
  pppiStack_68 = (int ***)&DAT_006702a4;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)&LAB_004947a0;
  pppiStack_68 = (int ***)&DAT_006702a0;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)&LAB_00494af0;
  pppiStack_68 = (int ***)&DAT_0067029c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)&LAB_00494e40;
  pppiStack_68 = (int ***)&DAT_00670298;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)&LAB_00495190;
  pppiStack_68 = (int ***)&DAT_0066f6ac;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004955f0;
  pppiStack_68 = (int ***)&DAT_0066f6b0;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00495a20;
  pppiStack_68 = (int ***)&DAT_0066f6b4;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00495e50;
  pppiStack_68 = (int ***)&DAT_0066f570;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00496280;
  pppiStack_68 = (int ***)s_quotent_0066f6b8;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00496580;
  pppiStack_68 = (int ***)s_reminder_0066f6c0;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00496880;
  pppiStack_68 = (int ***)s_modulo_0066f6cc;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00496b80;
  pppiStack_68 = (int ***)s_numerator_0066f6d4;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00496d90;
  pppiStack_68 = (int ***)s_denominator_0066f6e0;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00496fa0;
  pppiStack_68 = (int ***)s_floor_0066f6ec;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004971b0;
  pppiStack_68 = (int ***)s_ceiling_0066f6f4;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004973c0;
  pppiStack_68 = (int ***)s_truncate_0066f6fc;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004975d0;
  pppiStack_68 = (int ***)s_round_0066f708;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004977e0;
  pppiStack_68 = (int ***)&PTR_DAT_0066f710;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004979f0;
  pppiStack_68 = (int ***)&PTR_s__BackF5pol_msk_00676f68_4_0066f714;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00497c00;
  pppiStack_68 = (int ***)&PTR_DAT_0066f718;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00497e10;
  pppiStack_68 = (int ***)&PTR_DAT_0066f71c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00498020;
  pppiStack_68 = (int ***)&PTR_DAT_0066f720;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00498230;
  pppiStack_68 = (int ***)&DAT_0066f724;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00498440;
  pppiStack_68 = (int ***)&DAT_0066f72c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00498650;
  pppiStack_68 = (int ***)&DAT_0066f734;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00498860;
  pppiStack_68 = (int ***)s_atan2_0066f73c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00498b60;
  pppiStack_68 = (int ***)&DAT_0066f744;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00498d70;
  pppiStack_68 = (int ***)&DAT_0066f74c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00498f80;
  pppiStack_68 = (int ***)s_make_rectangilar_0066f754;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00499190;
  pppiStack_68 = (int ***)s_make_polar_0066f768;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004993a0;
  pppiStack_68 = (int ***)s_real_part_0066f774;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004995b0;
  pppiStack_68 = (int ***)s_imag_part_0066f780;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004997c0;
  pppiStack_68 = (int ***)s_magnitude_0066f78c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004999d0;
  pppiStack_68 = (int ***)s_angle_0066f798;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00499be0;
  pppiStack_68 = (int ***)s_exact_>inexact_0066f7a0;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_00499df0;
  pppiStack_68 = (int ***)s_inexact_>exact_0066f7b0;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049a000;
  pppiStack_68 = (int ***)s_number_>string_0066f7c0;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049a250;
  pppiStack_68 = (int ***)s_string_>number_0066f7d0;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049a500;
  pppiStack_68 = (int ***)s_pair__0066f7e0;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049a620;
  pppiStack_68 = (int ***)&DAT_0066f7e8;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049a820;
  pppiStack_68 = (int ***)&PTR_DAT_0066ce28;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049a8c0;
  pppiStack_68 = (int ***)&PTR_DAT_0066f7f0;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049a960;
  pppiStack_68 = (int ***)s_set_car__0066f7f4;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049abb0;
  pppiStack_68 = (int ***)s_set_cdr__0066f800;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049ae00;
  pppiStack_68 = (int ***)s_symbol__0066f80c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049af20;
  pppiStack_68 = (int ***)s_symbol_>string_0066f814;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049b140;
  pppiStack_68 = (int ***)s_string_>symbol_0066f824;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049b360;
  pppiStack_68 = (int ***)s_char__0066f834;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049b480;
  pppiStack_68 = (int ***)s_char___0066f83c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049b6a0;
  pppiStack_68 = (int ***)s_char<__0066f844;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049b8c0;
  pppiStack_68 = (int ***)s_char>__0066f84c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049bae0;
  pppiStack_68 = (int ***)s_char<___0066f854;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049bd00;
  pppiStack_68 = (int ***)s_char>___0066f85c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049bf20;
  pppiStack_68 = (int ***)s_char_>integer_0066f864;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049c0e0;
  pppiStack_68 = (int ***)s_integer_>char_0066f874;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049c330;
  pppiStack_68 = (int ***)s_make_string_0066f884;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049c710;
  pppiStack_68 = (int ***)s_string__0066f890;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049c830;
  pppiStack_68 = (int ***)s_string_length_0066f898;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049ca90;
  pppiStack_68 = (int ***)s_string_ref_0066f8a8;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049cda0;
  pppiStack_68 = (int ***)s_string_set__0066f8b4;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049d0e0;
  pppiStack_68 = (int ***)s_vector__0066f8c0;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049d200;
  pppiStack_68 = (int ***)s_make_vector_0066f8c8;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049d4b0;
  pppiStack_68 = (int ***)s_list_>vector_0066f8d4;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049d760;
  pppiStack_68 = (int ***)s_vector_length_0066f8ec;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049d9d0;
  pppiStack_68 = (int ***)s_vector_ref_0066f8fc;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049dd30;
  pppiStack_68 = (int ***)s_vector_set__0067028c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049e070;
  pppiStack_68 = (int ***)s_procedure__0066f914;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049e1b0;
  pppiStack_68 = (int ***)s_scheme_report_environment_00670270;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049e210;
  pppiStack_68 = (int ***)s_null_environment_0067025c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049e2e0;
  pppiStack_68 = (int ***)s_interaction_environment_00670244;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049e340;
  pppiStack_68 = (int ***)s_input_port__0066f920;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049e570;
  pppiStack_68 = (int ***)s_output_port__0066f92c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049e7a0;
  pppiStack_68 = (int ***)s_current_input_port_00670230;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049e800;
  pppiStack_68 = (int ***)s_current_output_port_0067021c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049e910;
  pppiStack_68 = (int ***)s_open_input_file_0066f93c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049ec00;
  pppiStack_68 = (int ***)s_open_output_file_0066f94c;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049eef0;
  pppiStack_68 = (int ***)s_close_input_port_0066f960;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049f0d0;
  pppiStack_68 = (int ***)s_close_output_port_0066f974;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049f2b0;
  pppiStack_68 = (int ***)s_read_char_0066f988;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049f4f0;
  pppiStack_68 = (int ***)s_peek_char_0066f994;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049f7a0;
  pppiStack_68 = (int ***)s_eof_object__0066f9a0;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049f950;
  pppiStack_68 = (int ***)s_char_ready__0066f9ac;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049fb90;
  pppiStack_68 = (int ***)s_write_char_0066f9b8;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_0049fed0;
  pppiStack_68 = (int ***)&DAT_0066f9c4;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004a0140;
  pppiStack_68 = (int ***)s_write_0066f9cc;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004a0560;
  pppiStack_68 = (int ***)s_exception_00670210;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004a0620;
  pppiStack_68 = (int ***)s_string_append_0066f9ec;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004a0bf0;
  pppiStack_68 = (int ***)s_reverse_0066f9fc;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004a0dc0;
  pppiStack_68 = (int ***)&PTR_DAT_0066fa04;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004a0f30;
  pppiStack_68 = (int ***)s_null__0066fa08;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)FUN_004a1070;
  pppiStack_68 = (int ***)&DAT_00670208;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)&LAB_004a12c0;
  pppiStack_68 = (int ***)&DAT_0066fa10;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)&LAB_004a1400;
  pppiStack_68 = (int ***)&DAT_0066fa18;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)&LAB_004a1540;
  pppiStack_68 = (int ***)&DAT_0066fa20;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  pppiStack_64 = (int ***)&LAB_004a1680;
  pppiStack_68 = (int ***)&DAT_0066fa28;
  local_44 = (undefined1 *)&ppppiStack_74;
  FUN_00455dc0(ppppiVar6);
  FUN_004ad400(param_1);
  if (param_3 == (undefined1 *)0x0) {
    param_3 = &DAT_00670204;
  }
  pppiStack_64 = (int ***)&param_3;
  ppppiStack_6c = &pppiStack_30;
  pppiStack_68 = (int ***)0x0;
  ppppiStack_70 = (int ****)0x4ae907;
  piVar4 = (int *)FUN_004b0850();
  pppiStack_64 = (int ***)piVar4[2];
  if (((uint)pppiStack_64 & 0x10000) == 0) {
    pppiStack_68 = (int ***)0x0;
    ppppiStack_6c = (int ****)*piVar4;
    if (ppppiStack_6c == (int ****)0x0) {
      ppppiStack_6c = (int ****)0x0;
      pppiStack_64 = (int ***)0x0;
    }
    else {
      pppiStack_64 = (int ***)piVar4[2];
      ppppiStack_6c[1] = (int ***)((int)ppppiStack_6c[1] + 1);
    }
  }
  else {
    ppppiStack_6c = (int ****)*piVar4;
    pppiStack_68 = (int ***)piVar4[1];
  }
  ppppiStack_70 = (int ****)s_home_directory_006701f4;
  local_4 = 0x1d;
  ppppiStack_74 = param_1;
  local_44 = (undefined1 *)&ppppiStack_6c;
  FUN_004b8250();
  FUN_004a3fc0();
  local_4 = 9;
  if (((((uStack_28 & 0x10000) == 0) && (pppiStack_30 != (int ***)0x0)) &&
      (pppiStack_30[1] = (int **)((int)pppiStack_30[1] + -1), pppiStack_30[1] == (int **)0x0)) &&
     (pppiStack_30 != (int ***)0x0)) {
    pppiStack_64 = (int ***)0x1;
    pppiStack_68 = (int ***)0x4ae989;
    (*(code *)(*pppiStack_30)[3])();
  }
  pppiStack_64 = *ppppiVar6;
  ppppiStack_70 = &pppiStack_30;
  ppppiStack_6c = (int ****)0x0;
  ppppiStack_74 = (int ****)0x4ae998;
  pppiStack_68 = (int ***)param_1;
  piVar4 = (int *)FUN_004b0930();
  pppiVar2 = param_1[0xf];
  local_4 = 0x1f;
  if ((pppiVar2 != (int ***)0x0) && (((uint)param_1[0x11] & 0x10000) == 0)) {
    pppiVar2[1] = (int **)((int)pppiVar2[1] + -1);
    pppiVar2 = param_1[0xf];
    if (((pppiVar2[1] == (int **)0x0) &&
        (((pppiVar2 != (int ***)*piVar4 || (param_1[0x11] != (int ***)piVar4[2])) ||
         (param_1[0x10] != (int ***)piVar4[1])))) && (pppiVar2 != (int ***)0x0)) {
      pppiStack_64 = (int ***)0x1;
      pppiStack_68 = (int ***)0x4ae9e0;
      (*(code *)(*pppiVar2)[3])();
    }
  }
  if (((uint)piVar4[2] & 0x10000) == 0) {
    param_1[0x10] = (int ***)0x0;
    pppiVar2 = (int ***)*piVar4;
    if (pppiVar2 == (int ***)0x0) {
      param_1[0xf] = (int ***)0x0;
      param_1[0x11] = (int ***)0x0;
    }
    else {
      param_1[0xf] = pppiVar2;
      param_1[0x11] = (int ***)piVar4[2];
      pppiVar2[1] = (int **)((int)pppiVar2[1] + 1);
    }
  }
  else {
    param_1[0x11] = (int ***)piVar4[2];
    param_1[0xf] = (int ***)*piVar4;
    param_1[0x10] = (int ***)piVar4[1];
  }
  local_4 = 9;
  if (((((uStack_28 & 0x10000) == 0) && (pppiStack_30 != (int ***)0x0)) &&
      (pppiStack_30[1] = (int **)((int)pppiStack_30[1] + -1), pppiStack_30[1] == (int **)0x0)) &&
     (pppiStack_30 != (int ***)0x0)) {
    pppiStack_64 = (int ***)0x1;
    pppiStack_68 = (int ***)0x4aea48;
    (*(code *)(*pppiStack_30)[3])();
  }
  pppiStack_64 = (int ***)&local_44;
  pppiStack_68 = &local_48;
  ppppiStack_70 = &pppiStack_30;
  ppppiStack_6c = (int ****)0x0;
  local_44 = (undefined1 *)0x1;
  local_48 = (int **)&PTR_DAT_006852a0;
  ppppiStack_74 = (int ****)0x4aea6d;
  piVar4 = (int *)FUN_004b0a20();
  pppiVar2 = param_1[0x12];
  _local_4 = CONCAT31(uStack_3,0x20);
  if (pppiVar2 != (int ***)0x0) {
    pppiVar2[1] = (int **)((int)pppiVar2[1] + -1);
    pppiVar2 = param_1[0x12];
    if (((pppiVar2[1] == (int **)0x0) &&
        (((pppiVar2 != (int ***)*piVar4 || (param_1[0x14] != (int ***)piVar4[2])) ||
         (param_1[0x13] != (int ***)piVar4[1])))) && (pppiVar2 != (int ***)0x0)) {
      pppiStack_64 = (int ***)0x1;
      pppiStack_68 = (int ***)0x4aeab0;
      (*(code *)(*pppiVar2)[3])();
    }
  }
  if ((undefined4 *)*piVar4 == (undefined4 *)0x0) {
    param_1[0x12] = (int ***)0x0;
    param_1[0x14] = (int ***)0x0;
LAB_004aeaf8:
    param_1[0x13] = (int ***)0x0;
  }
  else {
    pppiStack_64 = (int ***)0x4aeabf;
    iVar5 = (*(code *)**(undefined4 **)*piVar4)();
    if (iVar5 == 0xb) {
      pppiVar2 = (int ***)*piVar4;
      param_1[0x12] = pppiVar2;
      param_1[0x14] = (int ***)piVar4[2];
      pppiVar2[1] = (int **)((int)pppiVar2[1] + 1);
      goto LAB_004aeaf8;
    }
    pppiStack_64 = (int ***)&DAT_0066bb28;
    pppiStack_68 = (int ***)0x4aead0;
    pppiStack_68 = (int ***)(**(code **)(*(int *)*piVar4 + 4))();
    ppppiStack_6c = (int ****)0x1;
    ppppiStack_70 = (int ****)0x2;
    ppppiStack_74 = (int ****)0x4aead9;
    FUN_004a5670();
  }
  local_4 = 9;
  if ((((uStack_28 & 0x10000) == 0) && (pppiStack_30 != (int ***)0x0)) &&
     ((pppiStack_30[1] = (int **)((int)pppiStack_30[1] + -1), pppiStack_30[1] == (int **)0x0 &&
      (pppiStack_30 != (int ***)0x0)))) {
    pppiStack_64 = (int ***)0x1;
    pppiStack_68 = (int ***)0x4aeb2e;
    (*(code *)(*pppiStack_30)[3])();
  }
  pppiStack_64 = (int ***)&local_44;
  pppiStack_68 = &local_48;
  ppppiStack_70 = &pppiStack_30;
  ppppiStack_6c = (int ****)0x0;
  local_44 = (undefined1 *)0x2;
  local_48 = (int **)&DAT_006852c0;
  ppppiStack_74 = (int ****)0x4aeb4f;
  piVar4 = (int *)FUN_004b0a20();
  pppiVar2 = param_1[0x15];
  _local_4 = CONCAT31(uStack_3,0x21);
  if (pppiVar2 != (int ***)0x0) {
    pppiVar2[1] = (int **)((int)pppiVar2[1] + -1);
    pppiVar2 = param_1[0x15];
    if (((pppiVar2[1] == (int **)0x0) &&
        (((pppiVar2 != (int ***)*piVar4 || (param_1[0x17] != (int ***)piVar4[2])) ||
         (param_1[0x16] != (int ***)piVar4[1])))) && (pppiVar2 != (int ***)0x0)) {
      pppiStack_64 = (int ***)0x1;
      pppiStack_68 = (int ***)0x4aeb92;
      (*(code *)(*pppiVar2)[3])();
    }
  }
  if ((undefined4 *)*piVar4 == (undefined4 *)0x0) {
    param_1[0x15] = (int ***)0x0;
    param_1[0x17] = (int ***)0x0;
LAB_004aebd1:
    param_1[0x16] = (int ***)0x0;
  }
  else {
    pppiStack_64 = (int ***)0x4aeb9c;
    iVar5 = (*(code *)**(undefined4 **)*piVar4)();
    pppiVar2 = (int ***)*piVar4;
    if (iVar5 == 0xb) {
      param_1[0x15] = pppiVar2;
      param_1[0x17] = (int ***)piVar4[2];
      pppiVar2[1] = (int **)((int)pppiVar2[1] + 1);
      goto LAB_004aebd1;
    }
    pppiStack_64 = (int ***)&DAT_0066bb28;
    pppiStack_68 = (int ***)0x4aebad;
    pppiStack_68 = (int ***)(*(code *)(*pppiVar2)[1])();
    ppppiStack_6c = (int ****)0x1;
    ppppiStack_70 = (int ****)0x2;
    ppppiStack_74 = (int ****)0x4aebb6;
    FUN_004a5670();
  }
  local_4 = 9;
  if ((((uStack_28 & 0x10000) == 0) && (pppiStack_30 != (int ***)0x0)) &&
     ((pppiStack_30[1] = (int **)((int)pppiStack_30[1] + -1), pppiStack_30[1] == (int **)0x0 &&
      (pppiStack_30 != (int ***)0x0)))) {
    pppiStack_64 = (int ***)0x1;
    pppiStack_68 = (int ***)0x4aec07;
    (*(code *)(*pppiStack_30)[3])();
  }
  pppiStack_64 = (int ***)&local_44;
  pppiStack_68 = &local_48;
  ppppiStack_70 = &pppiStack_30;
  ppppiStack_6c = (int ****)0x0;
  local_44 = (undefined1 *)0x2;
  local_48 = (int **)&DAT_006852e0;
  ppppiStack_74 = (int ****)0x4aec28;
  piVar4 = (int *)FUN_004b0a20();
  pppiVar2 = param_1[0x18];
  _local_4 = CONCAT31(uStack_3,0x22);
  if (pppiVar2 != (int ***)0x0) {
    pppiVar2[1] = (int **)((int)pppiVar2[1] + -1);
    pppiVar2 = param_1[0x18];
    if ((pppiVar2[1] == (int **)0x0) &&
       ((((pppiVar2 != (int ***)*piVar4 || (param_1[0x1a] != (int ***)piVar4[2])) ||
         (param_1[0x19] != (int ***)piVar4[1])) && (pppiVar2 != (int ***)0x0)))) {
      pppiStack_64 = (int ***)0x1;
      pppiStack_68 = (int ***)0x4aec6b;
      (*(code *)(*pppiVar2)[3])();
    }
  }
  if ((undefined4 *)*piVar4 == (undefined4 *)0x0) {
    param_1[0x18] = (int ***)0x0;
    param_1[0x1a] = (int ***)0x0;
  }
  else {
    pppiStack_64 = (int ***)0x4aec75;
    iVar5 = (*(code *)**(undefined4 **)*piVar4)();
    if (iVar5 != 0xb) {
      pppiStack_64 = (int ***)&DAT_0066bb28;
      pppiStack_68 = (int ***)0x4aec86;
      pppiStack_68 = (int ***)(**(code **)(*(int *)*piVar4 + 4))();
      ppppiStack_6c = (int ****)0x1;
      ppppiStack_70 = (int ****)0x2;
      ppppiStack_74 = (int ****)0x4aec8f;
      FUN_004a5670();
      goto LAB_004aecb1;
    }
    pppiVar2 = (int ***)*piVar4;
    param_1[0x18] = pppiVar2;
    param_1[0x1a] = (int ***)piVar4[2];
    pppiVar2[1] = (int **)((int)pppiVar2[1] + 1);
  }
  param_1[0x19] = (int ***)0x0;
LAB_004aecb1:
  local_4 = 9;
  if (((((uStack_28 & 0x10000) == 0) && (pppiStack_30 != (int ***)0x0)) &&
      (pppiStack_30[1] = (int **)((int)pppiStack_30[1] + -1), pppiStack_30[1] == (int **)0x0)) &&
     (pppiStack_30 != (int ***)0x0)) {
    pppiStack_64 = (int ***)0x1;
    pppiStack_68 = (int ***)0x4aece4;
    (*(code *)(*pppiStack_30)[3])();
  }
  if (param_2 == (char *)0x0) {
    param_2 = s_init_sch_006701e8;
  }
  pppiStack_64 = (int ***)&local_44;
  pppiStack_68 = (int ***)&param_2;
  ppppiStack_70 = (int ****)appiStack_24;
  ppppiStack_6c = (int ****)0x0;
  local_44 = (undefined1 *)0x1;
  ppppiStack_74 = (int ****)0x4aed0f;
  piVar4 = (int *)FUN_00455eb0();
  ppppiVar6 = (int ****)0x0;
  uStack_2c = 0;
  pppiStack_30 = (int ***)0x0;
  uStack_28 = 0;
  local_4 = 0x24;
  if ((undefined4 *)*piVar4 == (undefined4 *)0x0) {
    ppppiVar6 = (int ****)0x0;
    uStack_28 = 0;
    pppiStack_30 = (int ***)0x0;
  }
  else {
    pppiStack_64 = (int ***)0x4aed31;
    iVar5 = (*(code *)**(undefined4 **)*piVar4)();
    if (iVar5 == 0xb) {
      ppppiVar6 = (int ****)*piVar4;
      uStack_28 = piVar4[2];
      ppppiVar6[1] = (int ***)((int)ppppiVar6[1] + 1);
      pppiStack_30 = (int ***)ppppiVar6;
    }
    else {
      pppiStack_64 = (int ***)&DAT_0066bb28;
      pppiStack_68 = (int ***)0x4aed42;
      pppiStack_68 = (int ***)(**(code **)(*(int *)*piVar4 + 4))();
      ppppiStack_6c = (int ****)0x1;
      ppppiStack_70 = (int ****)0x2;
      ppppiStack_74 = (int ****)0x4aed4c;
      FUN_004a5670();
    }
  }
  local_4 = 0x26;
  if ((((uStack_1c & 0x10000) == 0) && ((int ***)appiStack_24[0] != (int ***)0x0)) &&
     ((appiStack_24[0][1] = (int *)((int)appiStack_24[0][1] + -1),
      (int **)appiStack_24[0][1] == (int **)0x0 && ((int ***)appiStack_24[0] != (int ***)0x0)))) {
    pppiStack_64 = (int ***)0x1;
    pppiStack_68 = (int ***)0x4aeda0;
    (*(code *)(*appiStack_24[0])[3])();
  }
  if (ppppiVar6 == (int ****)0x0) {
    pppiStack_64 = (int ***)0x1;
    pppiStack_68 = (int ***)0x0;
    ppppiStack_6c = (int ****)0x4aedac;
    FUN_004a5470();
  }
  uVar7 = uStack_28 & 0x10000;
  if (uVar7 != 0) {
    pppiStack_64 = (int ***)0x1;
    pppiStack_68 = (int ***)0x4;
    ppppiStack_6c = (int ****)0x4aedc4;
    FUN_004a5470();
  }
  pppiStack_64 = (int ***)0x4aedce;
  iVar5 = (*(code *)(*ppppiVar6)[10])();
  if (iVar5 == 0) {
    local_48 = (int **)&ppppiStack_6c;
    ppppiStack_6c = ppppiVar6;
    if (uVar7 == 0) {
      if (ppppiVar6 == (int ****)0x0) {
        ppppiStack_6c = (int ****)0x0;
        pppiStack_64 = (int ***)0x0;
      }
      else {
        pppiStack_64 = (int ***)uStack_28;
        ppppiVar6[1] = (int ***)((int)ppppiVar6[1] + 1);
      }
    }
    else {
      pppiStack_64 = (int ***)uStack_28;
    }
    pppiStack_68 = (int ***)0x0;
    ppppiStack_74 = &pppiStack_3c;
    ppppiStack_70 = param_1;
    FUN_004b4cb0();
    local_4 = 0x27;
    if ((uStack_34 != 0) || ((int ****)pppiStack_3c != (int ****)0x0)) {
      local_48 = (int **)&ppppiStack_6c;
      if ((uStack_34 & 0x10000) == 0) {
        pppiStack_68 = (int ***)0x0;
        if ((int ****)pppiStack_3c == (int ****)0x0) {
          ppppiStack_6c = (int ****)0x0;
          pppiStack_64 = (int ***)0x0;
        }
        else {
          ppppiStack_6c = (int ****)pppiStack_3c;
          pppiStack_64 = (int ***)uStack_34;
          pppiStack_3c[1] = (int **)((int)pppiStack_3c[1] + 1);
        }
      }
      else {
        pppiStack_64 = (int ***)uStack_34;
        ppppiStack_6c = (int ****)pppiStack_3c;
        pppiStack_68 = (int ***)uStack_38;
      }
      ppppiStack_74 = local_18;
      ppppiStack_70 = param_1;
      FUN_004a6c70();
      if (((((uStack_10 & 0x10000) == 0) && (local_18[0] != (int ***)0x0)) &&
          (local_18[0][1] = (int **)((int)local_18[0][1] + -1), local_18[0][1] == (int **)0x0)) &&
         (local_18[0] != (int ***)0x0)) {
        pppiStack_64 = (int ***)0x1;
        pppiStack_68 = (int ***)0x4aeeb5;
        (*(code *)(*local_18[0])[3])();
      }
    }
    local_4 = 0x26;
    if ((((uStack_34 & 0x10000) == 0) && ((int ****)pppiStack_3c != (int ****)0x0)) &&
       ((pppiStack_3c[1] = (int **)((int)pppiStack_3c[1] + -1),
        (int ***)pppiStack_3c[1] == (int ***)0x0 && ((int ****)pppiStack_3c != (int ****)0x0)))) {
      pppiStack_64 = (int ***)0x1;
      pppiStack_68 = (int ***)0x4aeee9;
      (*(code *)(*pppiStack_3c)[3])();
    }
  }
  _local_4 = CONCAT31(uStack_3,9);
  if (((uVar7 == 0) && (ppppiVar6 != (int ****)0x0)) &&
     (pppiVar2 = ppppiVar6[1], ppppiVar6[1] = (int ***)((int)pppiVar2 + -1),
     (int ***)((int)pppiVar2 + -1) == (int ***)0x0)) {
    pppiStack_64 = (int ***)0x1;
    pppiStack_68 = (int ***)0x4aef08;
    (*(code *)(*ppppiVar6)[3])();
  }
  ExceptionList = pvStack_c;
  return param_1;
}

