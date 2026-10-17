
undefined4 FUN_005e6f60(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  char *pcVar19;
  char *pcVar20;
  int local_2c;
  int local_24;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648c2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar5 = FUN_0061db0f(param_2);
  iVar6 = FUN_0061f40b(iVar2);
  iVar7 = FUN_0061f40b(iVar2);
  FUN_0061f40b(iVar2);
  FUN_005aa7c0(iVar2);
  iVar8 = FUN_005aa7c0(iVar2);
  iVar9 = FUN_0061f40b(iVar2);
  FUN_005aa7c0(iVar2);
  FUN_005aa7c0(iVar2);
  iVar10 = FUN_005aa7c0(iVar2);
  iVar11 = FUN_005aa7c0(iVar2);
  iVar12 = FUN_0061f40b(iVar2);
  FUN_0061f40b(iVar2);
  iVar13 = FUN_0061db0f(iVar2);
  local_2c = 0;
  uVar14 = FUN_005d7a00();
  iVar1 = param_1;
  switch(uVar14) {
  case 1:
    *(undefined4 *)(param_1 + 0x40) = 1;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x40) = 3;
    break;
  case 3:
    *(uint *)(param_1 + 0x40) = (iVar12 == 0x20) + 6;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x40) = 7;
    break;
  default:
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (0 < iVar6) {
    uVar3 = FUN_0061f40b(iVar2);
    param_1 = CONCAT31(param_1._1_3_,uVar3);
    uVar3 = FUN_0061f40b(iVar2);
    param_1._0_2_ = CONCAT11(uVar3,(char)param_1);
    uVar3 = FUN_0061f40b(iVar2);
    param_1._0_3_ = CONCAT12(uVar3,(undefined2)param_1);
    uVar3 = FUN_0061f40b(iVar2);
    param_1 = CONCAT13(uVar3,(undefined3)param_1);
    iVar12 = _strncmp((char *)&param_1,&DAT_006823d8,4);
    if (iVar12 == 0) {
      iVar12 = FUN_005aa810(iVar2);
      if (iVar12 != 4) {
        ExceptionList = local_c;
        return 0;
      }
      iVar12 = FUN_005aa810(iVar2,0);
      FUN_0061dd53(iVar2,iVar12 + iVar5);
      do {
        uVar3 = FUN_0061f40b(iVar2);
        param_1 = CONCAT31(param_1._1_3_,uVar3);
        uVar3 = FUN_0061f40b(iVar2);
        param_1._0_2_ = CONCAT11(uVar3,(char)param_1);
        uVar3 = FUN_0061f40b(iVar2);
        param_1._0_3_ = CONCAT12(uVar3,(undefined2)param_1);
        uVar3 = FUN_0061f40b(iVar2);
        param_1 = CONCAT13(uVar3,(undefined3)param_1);
        iVar12 = FUN_005aa810(iVar2);
        iVar15 = FUN_0061db0f(iVar2);
        iVar16 = _strncmp((char *)&param_1,&DAT_006823d0,4);
        if (iVar16 == 0) {
          *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 0x10;
          if (param_3 != 0) {
            pcVar20 = (char *)0x0;
            pcVar19 = s_Mapped_file_can_t_be_used_006823b4;
LAB_005e72e9:
            FUN_005d2520(pcVar19,pcVar20);
          }
        }
        else {
          iVar16 = _strncmp((char *)&param_1,&DAT_006823ac,4);
          if (iVar16 == 0) {
            *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 0x10;
            iVar16 = FUN_005aa810(iVar2);
            *(int *)(iVar1 + 0x44) = iVar16 + 1;
            local_2c = FUN_0061db0f(iVar2);
            local_2c = local_2c + 0xc;
            *(int *)(iVar1 + 0x28) = local_2c - iVar5;
          }
          else {
            iVar16 = _strncmp((char *)&param_1,&DAT_006823a4,4);
            if (iVar16 != 0) goto LAB_005e7315;
            param_2 = FUN_005aa810(iVar2);
            iVar16 = FUN_005aa810(iVar2);
            iVar17 = FUN_005aa810(iVar2);
            iVar18 = FUN_005aa810(iVar2);
            if (0x10 < iVar12) {
              local_24 = FUN_005aa810(iVar2);
              local_20 = FUN_005aa810(iVar2);
              FUN_005aa810(iVar2);
            }
            if (iVar17 == 0x1f) {
              if (iVar16 == 0x3e0) {
                if ((param_2 != 0x7c00) || (iVar18 != 0)) goto LAB_005e72c3;
                *(undefined4 *)(iVar1 + 0x40) = 3;
              }
              else {
                if (((iVar16 != 0x7e0) || (param_2 != 0xf800)) || (iVar18 != 0)) goto LAB_005e72c3;
                *(undefined4 *)(iVar1 + 0x40) = 2;
              }
            }
            else {
              if (iVar17 == 0xf) {
                if (((iVar16 == 0xf0) && (param_2 == 0xf00)) && (iVar18 == 0xf000)) {
                  *(undefined4 *)(iVar1 + 0x40) = 5;
                  goto LAB_005e72f1;
                }
              }
              else if (((iVar17 == 0xff) && (iVar16 == 0xff00)) && (param_2 == 0xff0000)) {
                if (iVar18 == 0) {
                  *(undefined4 *)(iVar1 + 0x40) = 6;
                }
                else {
                  if (iVar18 != -0x1000000) goto LAB_005e72c3;
                  *(undefined4 *)(iVar1 + 0x40) = 7;
                }
                goto LAB_005e72f1;
              }
LAB_005e72c3:
              if ((local_24 != 0xff00) || (local_20 != 0xff)) {
                pcVar19 = *(char **)(iVar1 + 4);
                pcVar20 = s___unsupported_texture_format_00682384;
                goto LAB_005e72e9;
              }
              *(undefined4 *)(iVar1 + 0x40) = 8;
            }
          }
        }
LAB_005e72f1:
        FUN_0061dd53(iVar2,(iVar12 + 3U & 0xfffffffc) + iVar15,0);
      } while( true );
    }
    goto LAB_005e7329;
  }
LAB_005e733f:
  iVar12 = 0;
  if (iVar7 != 0) {
    if (iVar9 != 0x10) {
      if (iVar9 != 0x18) {
        ExceptionList = local_c;
        return 0;
      }
      param_2 = 3;
      if (0x100 < iVar8) {
        ExceptionList = local_c;
        return 0;
      }
      if (*(int *)(iVar1 + 0x10) == 0) {
        iVar7 = FUN_00631d33(0x330);
        local_4 = 0;
        if (iVar7 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = FUN_005b8b90();
        }
        local_4 = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x10) = uVar14;
      }
      if (iVar8 != 0) {
        iVar9 = 0;
        iVar7 = iVar8;
        do {
          uVar3 = FUN_0061f40b(iVar2);
          *(undefined1 *)(*(int *)(iVar1 + 0x10) + 0x1a + iVar9) = uVar3;
          uVar3 = FUN_0061f40b(iVar2);
          *(undefined1 *)(*(int *)(iVar1 + 0x10) + 0x19 + iVar9) = uVar3;
          uVar3 = FUN_0061f40b(iVar2);
          *(undefined1 *)(*(int *)(iVar1 + 0x10) + 0x18 + iVar9) = uVar3;
          iVar9 = iVar9 + 3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar12 = param_2;
      if ((*(byte *)(iVar2 + 0xc) & 0x10) == 0) goto LAB_005e7434;
    }
    ExceptionList = local_c;
    return 0;
  }
LAB_005e7434:
  *(short *)(iVar1 + 0x14) = (short)iVar10;
  *(short *)(iVar1 + 0x16) = (short)iVar11;
  sVar4 = FUN_005d7a00();
  *(short *)(iVar1 + 0x18) = sVar4;
  if ((sVar4 == 3) && ((*(int *)(iVar1 + 0x40) == 7 || (*(int *)(iVar1 + 0x40) == 5)))) {
    *(undefined2 *)(iVar1 + 0x18) = 4;
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined2 *)(iVar1 + 0x1a) = 0;
  if (iVar10 == iVar11) {
    for (; 0 < iVar10; iVar10 = iVar10 >> 1) {
      *(short *)(iVar1 + 0x1a) = *(short *)(iVar1 + 0x1a) + 1;
    }
    *(short *)(iVar1 + 0x1a) = *(short *)(iVar1 + 0x1a) + -1;
  }
  *(int *)(iVar1 + 0x24) = (iVar12 * iVar8 - iVar5) + iVar13 + iVar6;
  if (param_3 != 0) {
    FUN_005ba440(iVar12 * iVar8 + iVar13 + iVar6 + param_3,local_2c + param_3,1);
    *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 0x200;
  }
  ExceptionList = local_c;
  return 1;
LAB_005e7315:
  _strncmp((char *)&param_1,&DAT_0068237c,4);
LAB_005e7329:
  FUN_0061dd53(iVar2,iVar13 + iVar6,0);
  goto LAB_005e733f;
}

