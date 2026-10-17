
void __thiscall FUN_0051eb60(int param_1,undefined4 param_2)

{
  uint *puVar1;
  float10 fVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 400) != 0) {
    FUN_005ba340();
    puVar1 = (uint *)(*(int *)(param_1 + 400) + 0x34);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  switch(param_2) {
  case 0:
    DAT_006cd35c = *(undefined4 *)(param_1 + 0x170);
    uVar4 = *(undefined4 *)(param_1 + 0x170);
    goto LAB_0051ec84;
  case 1:
    DAT_006cd35c = *(undefined4 *)(param_1 + 0x174);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x174);
    *(undefined4 *)(*(int *)(param_1 + 0x1b0) + 0x28) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x1ac) + 0x28) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x28) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x1b8) + 0x28) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x1a4) + 0x28) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0x28) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x1b4) + 0x28) = 0;
    uVar4 = *(undefined4 *)(param_1 + 0x1b4);
    break;
  case 2:
    DAT_006cd35c = *(undefined4 *)(param_1 + 0x178);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x178);
    *(undefined4 *)(*(int *)(param_1 + 0x1b0) + 0x28) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x1ac) + 0x28) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x28) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x1b8) + 0x28) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x1a4) + 0x28) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0x28) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x1b4) + 0x28) = 1;
    uVar4 = *(undefined4 *)(param_1 + 0x1b8);
    break;
  default:
    goto switchD_0051eb93_caseD_3;
  case 5:
    DAT_006cd35c = *(undefined4 *)(param_1 + 0x18c);
    uVar4 = *(undefined4 *)(param_1 + 0x18c);
LAB_0051ec84:
    *(undefined4 *)(param_1 + 400) = uVar4;
    *(undefined4 *)(*(int *)(param_1 + 0x1b0) + 0x28) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x1ac) + 0x28) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x28) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x1b8) + 0x28) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x1a4) + 0x28) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0x28) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x1b4) + 0x28) = 0;
    uVar4 = *(undefined4 *)(param_1 + 0x1b4);
  }
  FUN_005bd250(uVar4);
switchD_0051eb93_caseD_3:
  *(undefined4 *)(param_1 + 0x194) = param_2;
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bd250(*(undefined4 *)(param_1 + 0x1a4));
  FUN_005bd250(*(undefined4 *)(param_1 + 0x1b0));
  FUN_005d7cc0();
  (**(code **)(*(int *)DAT_00695c00[0x2ca] + 0x20))();
  (**(code **)(*DAT_006cdbd8 + 0x20))();
  (**(code **)(*DAT_006cdbd4 + 0x20))();
  (**(code **)(*DAT_006cdc00 + 0x20))();
  (**(code **)(*DAT_00695c00 + 0x20))();
  (**(code **)(*DAT_006cdc1c + 0x20))();
  (**(code **)(*DAT_006cdc10 + 0x20))();
  (**(code **)(*DAT_006cdc0c + 0x20))();
  (**(code **)(*DAT_006cdc14 + 0x20))();
  FUN_00598470();
  (**(code **)(*DAT_00695c10 + 0x20))();
  FUN_005fc7d0();
  FUN_005fca50();
  FUN_004e1230(0);
  if (*(int *)(DAT_006cdbcc + 0x540) != 0) {
    FUN_005ff190();
  }
  fVar2 = (float10)thunk_FUN_00603580();
  *(double *)(param_1 + 0x198) = (double)fVar2;
  if (((*(int *)(DAT_006cdbcc + 0x524) == 0) || (*(int *)(param_1 + 0x194) == 0)) ||
     (*(int *)(param_1 + 0x194) == 5)) {
    uVar5 = 0x3f800000;
    uVar4 = 0x3f800000;
    if (*(int *)(param_1 + 0x194) == 2) {
      pcVar3 = s_youwinSound_00676904;
    }
    else {
      pcVar3 = s_youlostSound_006768f4;
    }
    FUN_005eea00(pcVar3,0x3f800000,0x3f800000);
    FUN_005fd160(uVar4,uVar5);
  }
  else {
    FUN_00573c00();
    if (DAT_0067a698 == 1) {
      uVar5 = 0x3f800000;
      uVar4 = 0x3f800000;
      FUN_005eea00(s_youwinSound_00676904,0x3f800000,0x3f800000);
      FUN_005fd160(uVar4,uVar5);
      if (*(int *)(DAT_006cdbf8 + 0x180) < 2) {
        *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x17c);
      }
      else {
        *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x184);
      }
    }
    else if (DAT_0067a698 == 0) {
      uVar5 = 0x3f800000;
      uVar4 = 0x3f800000;
      FUN_005eea00(s_youlostSound_006768f4,0x3f800000,0x3f800000);
      FUN_005fd160(uVar4,uVar5);
      if (*(int *)(DAT_006cdbf8 + 0x180) < 2) {
        *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x180);
      }
      else {
        *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x188);
      }
    }
  }
  if (*(int *)(param_1 + 400) != 0) {
    FUN_005ba4e0(3);
    puVar1 = (uint *)(*(int *)(param_1 + 400) + 0x34);
    *puVar1 = *puVar1 | 1;
  }
  return;
}

