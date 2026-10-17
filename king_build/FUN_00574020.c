
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00574020(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  int iVar5;
  int iStack_150;
  int *piStack_14c;
  int local_134;
  int local_130 [8];
  int local_110;
  int local_100;
  int local_f0;
  int local_e0;
  int local_d0;
  int local_c0;
  int local_b0;
  int local_a0;
  int local_90;
  int local_80;
  int local_70;
  int local_60;
  int local_40;
  int local_30;
  int local_20;
  int local_10;
  
  piVar1 = local_130;
  iStack_150 = 0x13;
  do {
    piVar1[2] = 0;
    *piVar1 = 0;
    piVar1[3] = 0x3ff00000;
    piVar1 = piVar1 + 4;
    iStack_150 = iStack_150 + -1;
  } while (iStack_150 != 0);
  piStack_14c = local_130;
  FUN_00568670(&iStack_150);
  FUN_004769d0();
  iVar2 = *(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460);
  if ((*(int *)(iVar2 + 0x8cc) < DAT_006cd290) || (DAT_006cd294 <= *(int *)(iVar2 + 0x8cc))) {
    if (param_4 == 0) {
      piStack_14c = *(int **)(DAT_006cdc1c + 0x3f8);
    }
    else {
      piStack_14c = *(int **)(DAT_006cdc1c + 0x400);
    }
    iStack_150 = param_3 + 0x2d2;
    FUN_005b7d70(param_1,param_2 + 0x11);
    local_134 = 0;
    do {
      iVar3 = local_a0;
      iVar5 = local_f0;
      switch(local_134) {
      case 0:
        if (local_100 != 0) {
          iVar3 = param_3 + 0x329;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x2ac);
          iVar5 = param_2 + 0x75;
LAB_00574b38:
          piStack_14c = (int *)0x0;
          FUN_005b8030(param_1,iVar5,iVar3);
        }
        break;
      case 1:
        piStack_14c = (int *)0x5749a0;
        fVar4 = (float10)FUN_004eaf10();
        if (((float10)_DAT_0064a6d0 <= fVar4) && (iVar5 != 0)) {
          iVar3 = param_3 + 0x317;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x2b4);
          iVar5 = param_2 + 0x2c;
          goto LAB_00574b38;
        }
        break;
      case 2:
        if (local_e0 != 0) {
          iVar3 = param_3 + 0x318;
          iStack_150 = *(int *)(DAT_006cdc1c + 700);
          iVar5 = param_2 + 0x2f;
          goto LAB_00574b38;
        }
        break;
      case 3:
        if (local_d0 != 0) {
          iVar3 = param_3 + 0x2e6;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x2c4);
          iVar5 = param_2 + 0x1b;
          goto LAB_00574b38;
        }
        break;
      case 4:
        if (local_c0 != 0) {
          iVar3 = param_3 + 0x2f3;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x2cc);
          iVar5 = param_2 + 0x1c;
          goto LAB_00574b38;
        }
        break;
      case 5:
        if (local_20 != 0) {
          iVar3 = param_3 + 0x312;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x2d4);
          iVar5 = param_2 + 0x18;
          goto LAB_00574b38;
        }
        break;
      case 6:
        piStack_14c = (int *)0x574a61;
        fVar4 = (float10)FUN_004eaf10();
        if (((float10)_DAT_0064a6d0 <= fVar4) && (local_130[0] != 0)) {
          iVar3 = param_3 + 0x329;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x2dc);
          iVar5 = param_2 + 0x21;
          goto LAB_00574b38;
        }
        break;
      case 7:
        if (local_130[4] != 0) {
          iVar3 = param_3 + 0x329;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x2e4);
LAB_00574b33:
          iVar5 = param_2 + 0x3d;
          goto LAB_00574b38;
        }
        break;
      case 8:
        if (local_10 != 0) {
          iVar3 = param_3 + 0x2de;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x2ec);
          goto LAB_00574b33;
        }
        break;
      case 9:
        piStack_14c = (int *)0x574867;
        fVar4 = (float10)FUN_004eaf10();
        if (((float10)_DAT_0064a6d0 <= fVar4) && (iVar3 == 1)) {
          iVar5 = param_3 + 0x312;
          piStack_14c = (int *)0x0;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x2f4);
          FUN_005b8030(param_1,param_2 + 0x29,iVar5);
          FUN_005b8030(param_1,param_2 + 0x67,iVar5,*(undefined4 *)(DAT_006cdc1c + 0x2f4),0);
          FUN_005b8030(param_1,param_2 + 0x7e,iVar5,*(undefined4 *)(DAT_006cdc1c + 0x2f4),0);
        }
        break;
      case 10:
        piStack_14c = (int *)0x5747db;
        fVar4 = (float10)FUN_004eaf10();
        if (((float10)_DAT_0064a6d0 <= fVar4) && (iVar3 == 2)) {
          iVar5 = param_3 + 0x312;
          piStack_14c = (int *)0x0;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x2fc);
          FUN_005b8030(param_1,param_2 + 0x29,iVar5);
          FUN_005b8030(param_1,param_2 + 0x67,iVar5,*(undefined4 *)(DAT_006cdc1c + 0x2fc),0);
          FUN_005b8030(param_1,param_2 + 0x7e,iVar5,*(undefined4 *)(DAT_006cdc1c + 0x2fc),0);
        }
        break;
      case 0xb:
        if (local_60 != 0) {
          iVar3 = param_3 + 0x311;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x304);
          iVar5 = param_2 + 0x47;
          goto LAB_00574b38;
        }
        break;
      case 0xc:
        if (local_110 != 0) {
          iVar3 = param_3 + 0x2d6;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x30c);
          iVar5 = param_2 + 0x75;
          goto LAB_00574b38;
        }
        break;
      case 0xd:
        if (local_40 != 0) {
          iVar3 = param_3 + 0x2eb;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x314);
          iVar5 = param_2 + 0x15;
          goto LAB_00574b38;
        }
        break;
      case 0xe:
        if (local_30 != 0) {
          iVar3 = param_3 + 0x2f2;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x31c);
          iVar5 = param_2 + 0x75;
          goto LAB_00574b38;
        }
        break;
      case 0xf:
        if (local_90 != 0) {
          iVar3 = param_3 + 0x2f2;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x324);
          iVar5 = param_2 + 0x59;
          goto LAB_00574b38;
        }
        break;
      case 0x10:
        if (local_70 != 0) {
          iVar3 = param_3 + 0x329;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x32c);
          iVar5 = param_2 + 0x59;
          goto LAB_00574b38;
        }
        break;
      case 0x11:
        if (local_b0 != 0) {
          iVar3 = param_3 + 0x2d6;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x334);
          iVar5 = param_2 + 0x59;
          goto LAB_00574b38;
        }
        break;
      case 0x12:
        if (local_80 != 0) {
          iVar3 = param_3 + 0x2e1;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x33c);
          iVar5 = param_2 + 0x26;
          goto LAB_00574b38;
        }
      }
      local_134 = local_134 + 1;
    } while (local_134 < 0x14);
    piStack_14c = (int *)0x574b62;
    fVar4 = (float10)FUN_004eaf10();
    if (fVar4 < (float10)_DAT_0064ca48) {
      piStack_14c = (int *)0x0;
      iStack_150 = *(int *)(DAT_006cdc1c + 0x2d8);
      FUN_005b8030(param_1,param_2 + 0x21,param_3 + 0x329);
    }
    piStack_14c = (int *)0x574b9d;
    fVar4 = (float10)FUN_004eaf10();
    if (fVar4 < (float10)_DAT_0064a6d0) {
      piStack_14c = (int *)0x0;
      iStack_150 = *(int *)(DAT_006cdc1c + 0x2b0);
      FUN_005b8030(param_1,param_2 + 0x2c,param_3 + 0x317);
    }
    if ((*(byte *)(iVar2 + 0x3c94) & 3) != 0) {
      piStack_14c = (int *)0x0;
      iStack_150 = *(int *)(DAT_006cdc1c + 0x2f0);
      FUN_005b8030(param_1,param_2 + 0x29,param_3 + 0x312);
    }
    if ((*(byte *)(iVar2 + 0x3c94) & 0xc) != 0) {
      piStack_14c = (int *)0x0;
      iStack_150 = *(int *)(DAT_006cdc1c + 0x2f0);
      FUN_005b8030(param_1,param_2 + 0x67,param_3 + 0x312);
    }
    if ((*(byte *)(iVar2 + 0x3c94) & 0x30) != 0) {
      piStack_14c = (int *)0x0;
      iStack_150 = *(int *)(DAT_006cdc1c + 0x2f0);
      FUN_005b8030(param_1,param_2 + 0x7e,param_3 + 0x312);
    }
    if (0 < *(int *)(iVar2 + 0x3c90)) {
      piStack_14c = (int *)0x0;
      iStack_150 = *(int *)(DAT_006cdc1c + 0x340);
      FUN_005b8030(param_1,param_2 + 0x22,param_3 + 0x305);
    }
    if (0 < *(int *)(iVar2 + 0x3c98)) {
      piStack_14c = (int *)0x0;
      iStack_150 = *(int *)(DAT_006cdc1c + 0x348);
      FUN_005b8030(param_1,param_2 + 0x22,param_3 + 0x2fb);
    }
    piStack_14c = (int *)0x574cb9;
    iVar2 = (**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x40))();
    if (3 < iVar2) {
      piStack_14c = (int *)0x0;
      iStack_150 = *(int *)(DAT_006cdc1c + 0x2c0);
      FUN_005b8030(param_1,param_2 + 0x1b,param_3 + 0x2e6);
    }
    piStack_14c = (int *)0x574cf1;
    iVar2 = (**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x44))();
    if (iVar2 < 1) {
      return;
    }
    param_3 = param_3 + 0x312;
    param_2 = param_2 + 0x18;
    iStack_150 = *(int *)(DAT_006cdc1c + 0x2d0);
  }
  else {
    if (param_4 == 0) {
      piStack_14c = *(int **)(DAT_006cdc1c + 0x3fc);
    }
    else {
      piStack_14c = *(int **)(DAT_006cdc1c + 0x404);
    }
    iStack_150 = param_3 + 0x2d2;
    FUN_005b7d70(param_1,param_2 + 0x11);
    local_134 = 0;
    do {
      iVar3 = local_a0;
      iVar5 = local_f0;
      switch(local_134) {
      case 0:
        if (local_100 != 0) {
          iVar3 = param_3 + 0x329;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x354);
          iVar5 = param_2 + 0x75;
LAB_005744f4:
          piStack_14c = (int *)0x0;
          FUN_005b8030(param_1,iVar5,iVar3);
        }
        break;
      case 1:
        piStack_14c = (int *)0x574358;
        fVar4 = (float10)FUN_004eaf10();
        if (((float10)_DAT_0064a6d0 <= fVar4) && (iVar5 != 0)) {
          iVar3 = param_3 + 0x314;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x35c);
          iVar5 = param_2 + 0x28;
          goto LAB_005744f4;
        }
        break;
      case 2:
        if (local_e0 != 0) {
          iVar3 = param_3 + 0x316;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x364);
          iVar5 = param_2 + 0x2b;
          goto LAB_005744f4;
        }
        break;
      case 3:
        if (local_d0 != 0) {
          iVar3 = param_3 + 0x2f3;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x36c);
          iVar5 = param_2 + 0x17;
          goto LAB_005744f4;
        }
        break;
      case 4:
        if (local_c0 != 0) {
          iVar3 = param_3 + 0x2f5;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x374);
          iVar5 = param_2 + 0x3c;
          goto LAB_005744f4;
        }
        break;
      case 5:
        if (local_20 != 0) {
          iVar3 = param_3 + 0x308;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x37c);
          iVar5 = param_2 + 0x19;
          goto LAB_005744f4;
        }
        break;
      case 6:
        piStack_14c = (int *)0x57441d;
        fVar4 = (float10)FUN_004eaf10();
        if (((float10)_DAT_0064a6d0 <= fVar4) && (local_130[0] != 0)) {
          iVar3 = param_3 + 0x329;
          iStack_150 = *(int *)(DAT_006cdc1c + 900);
          iVar5 = param_2 + 0x21;
          goto LAB_005744f4;
        }
        break;
      case 7:
        if (local_130[4] != 0) {
          iVar3 = param_3 + 0x329;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x38c);
          iVar5 = param_2 + 0x3d;
          goto LAB_005744f4;
        }
        break;
      case 8:
        if (local_10 != 0) {
          iVar3 = param_3 + 0x2f4;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x394);
          iVar5 = param_2 + 0x32;
          goto LAB_005744f4;
        }
        break;
      case 9:
        piStack_14c = (int *)0x574239;
        fVar4 = (float10)FUN_004eaf10();
        if (((float10)_DAT_0064a6d0 <= fVar4) && (iVar3 == 1)) {
          piStack_14c = (int *)0x0;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x39c);
          FUN_005b8030(param_1,param_2 + 0x24,param_3 + 0x30f);
          FUN_005b8030(param_1,param_2 + 0x72,param_3 + 0x30f,*(undefined4 *)(DAT_006cdc1c + 0x39c),
                       0);
        }
        break;
      case 10:
        piStack_14c = (int *)0x5741c7;
        fVar4 = (float10)FUN_004eaf10();
        if (((float10)_DAT_0064a6d0 <= fVar4) && (iVar3 == 2)) {
          piStack_14c = (int *)0x0;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x3a4);
          FUN_005b8030(param_1,param_2 + 0x24,param_3 + 0x30f);
          FUN_005b8030(param_1,param_2 + 0x72,param_3 + 0x30f,*(undefined4 *)(DAT_006cdc1c + 0x3a4),
                       0);
        }
        break;
      case 0xb:
        if (local_60 != 0) {
          iVar3 = param_3 + 0x302;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x3ac);
          iVar5 = param_2 + 0x7b;
          goto LAB_005744f4;
        }
        break;
      case 0xc:
        if (local_110 != 0) {
          iVar3 = param_3 + 0x2d6;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x3b4);
          iVar5 = param_2 + 0x75;
          goto LAB_005744f4;
        }
        break;
      case 0xd:
        if (local_40 != 0) {
          iVar3 = param_3 + 0x2f2;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x3bc);
          iVar5 = param_2 + 0x3f;
          goto LAB_005744f4;
        }
        break;
      case 0xe:
        if (local_30 != 0) {
          iVar3 = param_3 + 0x2d6;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x3c4);
          iVar5 = param_2 + 0x3d;
          goto LAB_005744f4;
        }
        break;
      case 0xf:
        if (local_90 != 0) {
          iVar3 = param_3 + 0x2d6;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x3cc);
          iVar5 = param_2 + 0x21;
          goto LAB_005744f4;
        }
        break;
      case 0x10:
        if (local_70 != 0) {
          iVar3 = param_3 + 0x329;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x3d4);
          iVar5 = param_2 + 0x59;
          goto LAB_005744f4;
        }
        break;
      case 0x11:
        if (local_b0 != 0) {
          iVar3 = param_3 + 0x2d6;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x3dc);
          iVar5 = param_2 + 0x59;
          goto LAB_005744f4;
        }
        break;
      case 0x12:
        if (local_80 != 0) {
          iVar3 = param_3 + 0x2fe;
          iStack_150 = *(int *)(DAT_006cdc1c + 0x3e4);
          iVar5 = param_2 + 0x21;
          goto LAB_005744f4;
        }
      }
      local_134 = local_134 + 1;
    } while (local_134 < 0x14);
    piStack_14c = (int *)0x57451e;
    fVar4 = (float10)FUN_004eaf10();
    if (fVar4 < (float10)_DAT_0064ca48) {
      piStack_14c = (int *)0x0;
      iStack_150 = *(int *)(DAT_006cdc1c + 0x380);
      FUN_005b8030(param_1,param_2 + 0x21,param_3 + 0x329);
    }
    piStack_14c = (int *)0x574559;
    fVar4 = (float10)FUN_004eaf10();
    if (fVar4 < (float10)_DAT_0064a6d0) {
      piStack_14c = (int *)0x0;
      iStack_150 = *(int *)(DAT_006cdc1c + 0x358);
      FUN_005b8030(param_1,param_2 + 0x28,param_3 + 0x314);
    }
    if ((*(byte *)(iVar2 + 0x3c94) & 3) != 0) {
      piStack_14c = (int *)0x0;
      iStack_150 = *(int *)(DAT_006cdc1c + 0x398);
      FUN_005b8030(param_1,param_2 + 0x24,param_3 + 0x30f);
    }
    if ((*(byte *)(iVar2 + 0x3c94) & 0xc) != 0) {
      piStack_14c = (int *)0x0;
      iStack_150 = *(int *)(DAT_006cdc1c + 0x398);
      FUN_005b8030(param_1,param_2 + 0x72,param_3 + 0x30f);
    }
    if (0 < *(int *)(iVar2 + 0x3c90)) {
      piStack_14c = (int *)0x0;
      iStack_150 = *(int *)(DAT_006cdc1c + 1000);
      FUN_005b8030(param_1,param_2 + 0x44,param_3 + 0x308);
    }
    if (0 < *(int *)(iVar2 + 0x3c98)) {
      piStack_14c = (int *)0x0;
      iStack_150 = *(int *)(DAT_006cdc1c + 0x3f0);
      FUN_005b8030(param_1,param_2 + 0x33,param_3 + 0x2ff);
    }
    piStack_14c = (int *)0x57464a;
    iVar2 = (**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x40))();
    if (3 < iVar2) {
      piStack_14c = (int *)0x0;
      iStack_150 = *(int *)(DAT_006cdc1c + 0x368);
      FUN_005b8030(param_1,param_2 + 0x17,param_3 + 0x2f3);
    }
    piStack_14c = (int *)0x574683;
    iVar2 = (**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x44))();
    if (iVar2 < 1) {
      return;
    }
    param_3 = param_3 + 0x308;
    param_2 = param_2 + 0x19;
    iStack_150 = *(int *)(DAT_006cdc1c + 0x378);
  }
  piStack_14c = (int *)0x0;
  FUN_005b8030(param_1,param_2,param_3);
  return;
}

