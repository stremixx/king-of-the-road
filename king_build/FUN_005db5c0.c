
/* WARNING: Removing unreachable block (ram,0x005db6c0) */
/* WARNING: Removing unreachable block (ram,0x005db639) */
/* WARNING: Removing unreachable block (ram,0x005db68d) */
/* WARNING: Removing unreachable block (ram,0x005db702) */

void FUN_005db5c0(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 unaff_EBX;
  undefined4 *puVar8;
  undefined4 local_90 [12];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  uVar4 = DAT_00720200;
  uVar2 = DAT_007201fc;
  uVar1 = DAT_007201f8;
  if (param_1 != (int *)0x0) {
    switch(param_1[4]) {
    case 4:
      if (param_1[0xf] != 0) {
        puVar5 = local_90 + 2;
        iVar3 = 4;
        do {
          puVar5[-2] = 0;
          puVar5[-1] = 0;
          *puVar5 = 0;
          puVar5 = puVar5 + 3;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        puVar5 = &DAT_00701550;
        puVar8 = local_90;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        }
        FUN_005f1c30(local_90);
        uVar4 = FUN_005aba00(local_60,local_90);
        FUN_005ab040(uVar4);
      }
      for (iVar3 = (**(code **)(*param_1 + 0x40))(0); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
        FUN_005db5c0(iVar3);
      }
      DAT_007201f8 = unaff_EBX;
      DAT_007201fc = uVar1;
      DAT_00720200 = uVar2;
      return;
    case 5:
    case 0xf:
    case 0x15:
      for (iVar3 = (**(code **)(*param_1 + 0x40))(0); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
        FUN_005db5c0(iVar3);
      }
      break;
    case 7:
      for (iVar3 = (**(code **)(*param_1 + 0x40))(0); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
        FUN_005db5c0(iVar3);
      }
      for (iVar3 = (**(code **)(*param_1 + 0x40))(1); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
        FUN_005db5c0(iVar3);
      }
      break;
    case 8:
      iVar3 = FUN_005f7f40(&DAT_007201f8);
      for (iVar3 = (**(code **)(*param_1 + 0x40))(iVar3 == 0); iVar3 != 0;
          iVar3 = *(int *)(iVar3 + 8)) {
        FUN_005db5c0(iVar3);
      }
      break;
    case 9:
      iVar3 = FUN_005f7f40(&DAT_007201f8);
      if (iVar3 != 0) {
        (*DAT_0072061c)(param_1 + 0xc,DAT_00720210);
      }
      break;
    case 0x11:
      if ((*(byte *)(param_1 + 10) & 8) == 0) {
        iVar3 = param_1[0x10];
        if (param_1[0x11] != 0) {
          puVar5 = local_90 + 2;
          iVar7 = 4;
          do {
            puVar5[-2] = 0;
            puVar5[-1] = 0;
            *puVar5 = 0;
            puVar5 = puVar5 + 3;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          puVar5 = &DAT_00701550;
          puVar8 = local_90;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar8 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar8 = puVar8 + 1;
          }
          FUN_005f1c30(local_90);
          uVar6 = FUN_005aba00(local_30,local_90);
          FUN_005ab040(uVar6);
        }
        FUN_005db5c0(iVar3);
        DAT_007201f8 = uVar1;
        DAT_007201fc = uVar2;
        DAT_00720200 = uVar4;
        return;
      }
      break;
    case 0x12:
      if (param_1[0xf] == 0) {
        iVar3 = param_1[0xe];
      }
      else {
        iVar3 = *(int *)(param_1[0xf] + 0x38);
      }
      for (iVar3 = (**(code **)(*param_1 + 0x40))(iVar3); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
        FUN_005db5c0(iVar3);
      }
    }
  }
  return;
}

