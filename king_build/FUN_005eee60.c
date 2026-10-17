
uint FUN_005eee60(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  void *unaff_ESI;
  int *piVar7;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00649028;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_3 = 0xffffffff;
  FUN_0061d8bf(&DAT_00722964,0x20,1,param_1);
  uVar1 = FUN_005aa810(param_1);
  switch(uVar1) {
  case 0:
  case 1:
    *param_3 = uVar1;
    *param_6 = &DAT_00722964;
    ExceptionList = local_14;
    return 0;
  case 2:
    piVar2 = (int *)FUN_00631d33(0x48);
    local_c = 0x12;
    if (piVar2 != (int *)0x0) {
      FUN_005f1020(&DAT_00722964,7,3);
      piVar2[0xe] = 0;
      piVar2[0xf] = 0;
      piVar2[0x10] = 0;
      piVar2[0x11] = 0;
      *piVar2 = (int)&PTR_FUN_00651b28;
      break;
    }
    goto LAB_005efbe8;
  case 3:
    piVar2 = (int *)FUN_00631d33(0x3c);
    local_c = 0x14;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005f1020(&DAT_00722964,10,1);
    *piVar2 = (int)&PTR_FUN_00651adc;
    break;
  case 4:
    piVar2 = (int *)FUN_00631d33(0x44);
    local_c = 7;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005f1020(&DAT_00722964,4,1);
    *piVar2 = (int)&PTR_FUN_00651bc0;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    piVar2[0x10] = 0;
    break;
  case 5:
    iVar4 = _strncmp(&DAT_00722964,&DAT_00676698,3);
    if (iVar4 == 0) {
      puVar3 = (undefined4 *)FUN_00631d33(0x68);
      local_c = 3;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        FUN_005f1020(&DAT_00722964,0x17,1);
        puVar3[0xe] = 0;
        puVar3[0x10] = 0;
        puVar3[0x12] = 0x33333333;
        puVar3[0x16] = 0;
        puVar3[0x14] = 0;
        *puVar3 = &PTR_FUN_00651c0c;
        puVar3[0xf] = 0x40590000;
        puVar3[0x11] = 0x408f4000;
        puVar3[0x18] = 8;
        puVar3[0x13] = 0x3fd33333;
        puVar3[0x17] = 0xbff00000;
        puVar3[0x15] = 0xbff00000;
      }
      local_c = 0xffffffff;
      puVar3[9] = param_2;
      if (DAT_00722964 != '\0') {
        FUN_005d1bf0(&DAT_00722964,puVar3);
      }
      iVar4 = FUN_005f35a0(param_1,param_4,param_5);
      ExceptionList = local_14;
      return -(uint)(iVar4 != 0) & (uint)puVar3;
    }
    iVar4 = _strncmp(&DAT_00722964,&DAT_00678954,4);
    if (iVar4 == 0) {
      puVar3 = (undefined4 *)FUN_00631d33(0x90);
      local_c = 4;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        FUN_005f1020(&DAT_00722964,0x15,1);
        local_c = CONCAT31(local_c._1_3_,5);
        FUN_005acbd0();
        *puVar3 = &PTR_FUN_0064c434;
        puVar3[0x22] = 1;
        puVar3[0x23] = 0;
      }
      local_c = 0xffffffff;
      puVar3[9] = param_2;
      if (DAT_00722964 != '\0') {
        FUN_005d1bf0(&DAT_00722964,puVar3);
      }
      iVar4 = FUN_005f3230(param_1,param_4,param_5);
      ExceptionList = local_14;
      return -(uint)(iVar4 != 0) & (uint)puVar3;
    }
    piVar2 = (int *)FUN_00631d33(0x40);
    local_c = 6;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005f1020(&DAT_00722964,5,1);
    *piVar2 = (int)&PTR_FUN_0064b25c;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    break;
  case 6:
    piVar2 = (int *)FUN_00631d33(0x78);
    local_c = 0xe;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005f1020(&DAT_00722964,2,1);
    local_c = CONCAT31(local_c._1_3_,0xf);
    FUN_005e52e0();
    *piVar2 = (int)&PTR_FUN_00651b74;
    piVar2[0xe] = 0;
    piVar2[0x1c] = 0;
    piVar2[0x1d] = 0;
    piVar2[0x11] = 0;
    piVar2[0x1b] = 0;
    break;
  case 7:
    piVar2 = (int *)FUN_00631d33(0x74);
    local_c = 10;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005f1020(&DAT_00722964,3,1);
    local_c = CONCAT31(local_c._1_3_,0xb);
    FUN_005e52e0();
    *piVar2 = (int)&PTR_FUN_006505cc;
    piVar2[0x1a] = 0;
    piVar2[0x1c] = 0;
    piVar2[0xf] = 0;
    piVar2[0xe] = 0;
    piVar2[0x1b] = 0;
    piVar2[0x10] = 0;
    break;
  case 8:
    iVar4 = FUN_00631d33(100);
    local_c = 0;
    if (iVar4 == 0) {
LAB_005efa40:
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_005f0ba0(&DAT_00722964);
    }
    break;
  case 9:
    piVar2 = (int *)FUN_00631d33(0x44);
    local_c = 0x15;
    goto LAB_005ef872;
  case 10:
    piVar2 = (int *)FUN_00631d33(0x44);
    local_c = 0x16;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005f1020(&DAT_00722964,8,2);
    piVar2[0xe] = 1;
    *piVar2 = (int)&PTR_FUN_00651a90;
    break;
  case 0xb:
    piVar2 = (int *)FUN_00631d33(0x44);
    local_c = 0x17;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005f1020(&DAT_00722964,8,2);
    piVar2[0xe] = 3;
    *piVar2 = (int)&PTR_FUN_00651a90;
    break;
  case 0xc:
    piVar2 = (int *)FUN_00631d33(0x4c);
    local_c = 0x19;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005eed00(&DAT_00722964,9);
    piVar2[0xf] = 0;
    piVar2[0x10] = 5;
    *piVar2 = (int)&PTR_FUN_00650c90;
    break;
  case 0xd:
    piVar2 = (int *)FUN_00631d33(0x4c);
    local_c = 0x18;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005eed00(&DAT_00722964,9);
    piVar2[0xf] = 0;
    piVar2[0x10] = 0;
    *piVar2 = (int)&PTR_FUN_00650c90;
    break;
  case 0xe:
    piVar2 = (int *)FUN_00631d33(0x4c);
    local_c = 0x1a;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005eed00(&DAT_00722964,9);
    piVar2[0xf] = 0;
    piVar2[0x10] = 1;
    *piVar2 = (int)&PTR_FUN_00650c90;
    break;
  case 0xf:
    piVar2 = (int *)FUN_00631d33(0x4c);
    local_c = 0x1b;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005eed00(&DAT_00722964,9);
    piVar2[0xf] = 0;
    piVar2[0x10] = 2;
    *piVar2 = (int)&PTR_FUN_00650c90;
    break;
  case 0x10:
    piVar2 = (int *)FUN_00631d33(0x4c);
    local_c = 0x1c;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005eed00(&DAT_00722964,9);
    piVar2[0xf] = 0;
    piVar2[0x10] = 3;
    *piVar2 = (int)&PTR_FUN_00650c90;
    break;
  case 0x11:
    piVar2 = (int *)FUN_00631d33(0x4c);
    local_c = 0x1d;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005eed00(&DAT_00722964,9);
    piVar2[0xf] = 0;
    piVar2[0x10] = 4;
    *piVar2 = (int)&PTR_FUN_00650c90;
    break;
  case 0x12:
    piVar2 = (int *)FUN_00631d33(0x58);
    local_c = 0x1e;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005eed00(&DAT_00722964,0x11);
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    *piVar2 = (int)&PTR_FUN_0064b7cc;
    piVar2[0x10] = 0;
    piVar2[0x11] = 0;
    piVar2[0x12] = 0;
    piVar2[0x13] = 0;
    piVar2[0x14] = 0;
    piVar2[0x15] = -1;
    break;
  case 0x13:
    iVar4 = FUN_00631d33(0x140);
    local_c = 0x1f;
    if (iVar4 == 0) goto LAB_005efa40;
    piVar2 = (int *)FUN_005fbd50(&DAT_00722964);
    break;
  case 0x14:
    piVar2 = (int *)FUN_00631d33(0x4c);
    local_c = 0x21;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005eed00(&DAT_00722964,9);
    piVar2[0xf] = 0;
    piVar2[0x10] = 7;
    *piVar2 = (int)&PTR_FUN_00650c90;
    break;
  case 0x15:
    piVar2 = (int *)FUN_00631d33(0x40);
    local_c = 0x22;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005f1020(&DAT_00722964,0x12,0);
    *piVar2 = (int)&PTR_FUN_00651a44;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    break;
  case 0x16:
    piVar2 = (int *)FUN_00631d33(0x44);
    local_c = 0x23;
LAB_005ef872:
    if (piVar2 == (int *)0x0) {
LAB_005efbe8:
      piVar2 = (int *)0x0;
    }
    else {
      FUN_005f1020(&DAT_00722964,8,2);
      piVar2[0xe] = 5;
      *piVar2 = (int)&PTR_FUN_00651a90;
    }
    break;
  case 0x17:
    piVar2 = (int *)FUN_00631d33(0x4c);
    local_c = 0x24;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005eed00(&DAT_00722964,9);
    piVar2[0xf] = 0;
    piVar2[0x10] = 6;
    *piVar2 = (int)&PTR_FUN_00650c90;
    break;
  case 0x18:
    piVar2 = (int *)FUN_00631d33(0x70);
    local_c = 0x13;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005f1020(&DAT_00722964,6,1);
    iVar4 = 4;
    piVar6 = piVar2 + 0x12;
    do {
      piVar6[-2] = 0;
      piVar6[-1] = 0;
      *piVar6 = 0;
      piVar6 = piVar6 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    piVar6 = &DAT_00701550;
    piVar7 = piVar2 + 0x10;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    *piVar2 = (int)&PTR_FUN_0064c7c0;
    break;
  case 0x19:
    piVar2 = (int *)FUN_00631d33(0x6c);
    local_c = 0x25;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005eed00(&DAT_00722964,0x10);
    piVar2[0x15] = 0;
    piVar2[0x16] = 0;
    piVar2[0x17] = 0;
    piVar2[0x18] = 0;
    piVar2[0x19] = 0;
    piVar2[0x1a] = 0;
    *piVar2 = (int)&PTR_FUN_006519f8;
    piVar2[0x14] = 0;
    break;
  case 0x1a:
    piVar2 = (int *)FUN_00631d33(0x48);
    local_c = 0x26;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005f1020(&DAT_00722964,0x13,1);
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    piVar2[0x10] = 0;
    piVar2[0x11] = 0;
    *piVar2 = (int)&PTR_FUN_006519ac;
    break;
  case 0x1b:
    piVar2 = (int *)FUN_00631d33(0x48);
    local_c = 0x27;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005eed00(&DAT_00722964,0xc);
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    piVar2[0x10] = 0;
    *piVar2 = (int)&PTR_FUN_00651960;
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    break;
  case 0x1c:
    iVar4 = FUN_00631d33(0x44);
    local_c = 0x29;
    if (iVar4 == 0) goto LAB_005efa40;
    piVar2 = (int *)FUN_005f9d80(&DAT_00722964);
    break;
  case 0x1d:
    piVar2 = (int *)FUN_00631d33(0x54);
    local_c = 0x2a;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005f1020(&DAT_00722964,0xd,0);
    piVar2[0x10] = 0;
    piVar2[0x11] = 0;
    piVar2[0x12] = 0;
    piVar2[0x13] = 0;
    *piVar2 = (int)&PTR_FUN_006518c8;
    piVar2[0xe] = 0;
    piVar2[0x14] = 0;
    piVar2[0xf] = 0;
    break;
  case 0x1e:
    piVar2 = (int *)FUN_00631d33(0xc4);
    local_c = 0x2b;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005eed00(&DAT_00722964,0xe);
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    piVar2[0xe] = 0;
    piVar6 = piVar2 + 0xf;
    iVar4 = 4;
    do {
      *piVar6 = 0;
      piVar6[1] = 0;
      piVar6[2] = 0;
      piVar6 = piVar6 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    piVar2[0x1c] = 0;
    piVar2[0x1d] = 0;
    piVar2[0x1e] = 0;
    piVar2[0x1f] = 0;
    piVar2[0x20] = 0;
    piVar2[0x1b] = 0;
    *piVar2 = (int)&PTR_FUN_0065187c;
    *(undefined1 *)(piVar2 + 0x21) = 0;
    *(undefined1 *)(piVar2 + 0x29) = 0;
    break;
  case 0x1f:
    piVar2 = (int *)FUN_00631d33(0x60);
    local_c = 0x2c;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005eed00(&DAT_00722964,0x14);
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    piVar2[0x10] = 0;
    piVar2[0x11] = 0;
    piVar2[0x15] = 0;
    piVar2[0x16] = 0;
    piVar2[0x17] = 0;
    *piVar2 = (int)&PTR_FUN_00650580;
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    piVar2[0x13] = 0;
    piVar2[0x14] = 0;
    break;
  default:
    goto switchD_005eeeac_caseD_20;
  case 0x21:
    piVar2 = (int *)FUN_00631d33(0x90);
    local_c = 8;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005f1020(&DAT_00722964,0x15,1);
    local_c = CONCAT31(local_c._1_3_,9);
    FUN_005acbd0();
    *piVar2 = (int)&PTR_FUN_0064c434;
    piVar2[0x22] = 1;
    piVar2[0x23] = 0;
    break;
  case 0x22:
    piVar2 = (int *)FUN_00631d33(0x40);
    local_c = 0x28;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005eed00(&DAT_00722964,0x16);
    *piVar2 = (int)&PTR_FUN_00651914;
    piVar2[0xc] = 0;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    break;
  case 0x23:
    iVar4 = FUN_00631d33(100);
    local_c = 1;
    if (iVar4 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_005f0ba0(&DAT_00722964);
    }
    *(undefined2 *)(piVar2 + 0x18) = 1;
    break;
  case 0x24:
    piVar2 = (int *)FUN_00631d33(0x78);
    local_c = 0x10;
    if (piVar2 == (int *)0x0) {
LAB_005ef382:
      piVar2 = (int *)0x0;
      uRam0000006c = 1;
    }
    else {
      FUN_005f1020(&DAT_00722964,2,1);
      local_c = CONCAT31(local_c._1_3_,0x11);
      FUN_005e52e0();
      *piVar2 = (int)&PTR_FUN_00651b74;
      piVar2[0xe] = 0;
      piVar2[0x1c] = 0;
      piVar2[0x1d] = 0;
      piVar2[0x11] = 0;
      piVar2[0x1b] = 0;
      piVar2[0x1b] = 1;
    }
    break;
  case 0x25:
    piVar2 = (int *)FUN_00631d33(0x74);
    local_c = 0xc;
    if (piVar2 == (int *)0x0) goto LAB_005ef382;
    FUN_005f1020(&DAT_00722964,3,1);
    local_c = CONCAT31(local_c._1_3_,0xd);
    FUN_005e52e0();
    *piVar2 = (int)&PTR_FUN_006505cc;
    piVar2[0x1a] = 0;
    piVar2[0x1c] = 0;
    piVar2[0xf] = 0;
    piVar2[0xe] = 0;
    piVar2[0x1b] = 0;
    piVar2[0x10] = 0;
    piVar2[0x1b] = 1;
    break;
  case 0x27:
    piVar2 = (int *)FUN_00631d33(0x68);
    local_c = 0x2d;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005f1020(&DAT_00722964,0x17,1);
    piVar2[0xe] = 0;
    piVar2[0x10] = 0;
    piVar2[0x12] = 0x33333333;
    piVar2[0x16] = 0;
    piVar2[0x14] = 0;
    *piVar2 = (int)&PTR_FUN_00651c0c;
    piVar2[0xf] = 0x40590000;
    piVar2[0x11] = 0x408f4000;
    piVar2[0x18] = 8;
    piVar2[0x13] = 0x3fd33333;
    piVar2[0x17] = -0x40100000;
    piVar2[0x15] = -0x40100000;
    break;
  case 0x28:
    piVar2 = (int *)FUN_00631d33(0x4c);
    local_c = 2;
    if (piVar2 == (int *)0x0) goto LAB_005efbe8;
    FUN_005eed00(&DAT_00722964,0x18);
    piVar2[0x12] = 0;
    *piVar2 = (int)&PTR_FUN_0064f420;
    piVar2[0xe] = 0;
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    break;
  case 0x29:
    iVar4 = FUN_00631d33(0x140);
    local_c = 0x20;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_005fbd50(&DAT_00722964);
    }
    local_c = 0xffffffff;
    *(int *)(uVar5 + 0x24) = param_2;
    if (DAT_00722964 != '\0') {
      FUN_005d1bf0(&DAT_00722964,uVar5);
    }
    iVar4 = FUN_005fc0c0(param_1,param_4,param_5);
    ExceptionList = local_14;
    return -(uint)(iVar4 != 0) & uVar5;
  }
  local_c = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    piVar2[9] = param_2;
    if (DAT_00722964 != '\0') {
      FUN_005d1bf0(&DAT_00722964,piVar2);
    }
    iVar4 = (**(code **)(*piVar2 + 0x2c))(param_1,param_4,param_5);
    ExceptionList = unaff_ESI;
    return -(uint)(iVar4 != 0) & (uint)piVar2;
  }
switchD_005eeeac_caseD_20:
  ExceptionList = local_14;
  return 0;
}

