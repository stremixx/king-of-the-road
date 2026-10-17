
void FUN_0051f7e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_134;
  int local_130 [8];
  int local_110;
  int local_100;
  int local_f0;
  int local_e0;
  int local_d0;
  int local_c0;
  int local_a0;
  int local_80;
  int local_70;
  int local_60;
  int local_40;
  int local_20;
  
  piVar1 = local_130;
  iVar2 = 0x13;
  do {
    piVar1[2] = 0;
    *piVar1 = 0;
    piVar1[3] = 0x3ff00000;
    piVar1 = piVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_134 = *(int *)(param_1 + 0x509c);
  if (local_134 != DAT_0068a8f0) {
    piVar1 = local_130;
    iVar2 = DAT_0068a8f0;
    FUN_0041d3f0(&local_134);
    FUN_004769d0(iVar2,piVar1);
    iVar2 = 0;
    do {
      iVar3 = local_a0;
      switch(iVar2) {
      case 0:
        iVar3 = local_100;
        break;
      case 1:
        iVar3 = local_f0;
        break;
      case 2:
        iVar3 = local_e0;
        break;
      case 3:
        iVar3 = local_d0;
        break;
      case 4:
        iVar3 = local_c0;
        break;
      case 5:
        iVar3 = local_20;
        break;
      case 6:
        iVar3 = local_130[0];
        break;
      case 7:
        iVar3 = local_130[4];
        break;
      default:
        goto switchD_0051f850_caseD_8;
      case 9:
        if (local_a0 != 1) {
          if (local_a0 == 2) goto switchD_0051f850_caseD_8;
          iVar3 = 0;
        }
        break;
      case 10:
        if (local_a0 != 2) {
          if (local_a0 == 1) goto switchD_0051f850_caseD_8;
          iVar3 = 0;
        }
        break;
      case 0xb:
        iVar3 = local_60;
        break;
      case 0xc:
        iVar3 = local_110;
        break;
      case 0xd:
        iVar3 = local_40;
        break;
      case 0x10:
        iVar3 = local_70;
        break;
      case 0x12:
        iVar3 = local_80;
      }
      FUN_004ead20(iVar3);
switchD_0051f850_caseD_8:
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
  }
  return;
}

