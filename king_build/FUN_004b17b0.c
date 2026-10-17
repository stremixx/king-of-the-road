
undefined4 FUN_004b17b0(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643ba8;
  local_c = ExceptionList;
  piVar1 = (int *)(param_4 + 8);
  ExceptionList = &local_c;
  puVar3 = (undefined4 *)FUN_004b27c0(local_1c,0);
  cVar2 = FUN_0061e299(*(undefined4 *)*puVar3);
  while( true ) {
    uVar7 = (int)cVar2 - 0x23;
    if (0x30 < uVar7) break;
    switch(uVar7) {
    default:
      goto switchD_004b1809_caseD_24;
    case 0x2e:
      if (*piVar1 == *(int *)(param_4 + 0x10) + -4) {
        FUN_004b28d0();
      }
      else {
        *piVar1 = *piVar1 + 4;
      }
      puVar3 = (undefined4 *)FUN_004b27c0(local_1c,0);
      cVar2 = FUN_0061e299(*(undefined4 *)*puVar3);
      iVar4 = (int)cVar2;
      uVar7 = iVar4 - 0x23;
      if (0x30 < uVar7) {
        ExceptionList = local_c;
        return 1;
      }
      do {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((&UNK_004b1be0)[uVar7]) {
        default:
          ExceptionList = local_c;
          return 1;
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
          if (param_3 <= iVar4 + -0x30) {
            FUN_004a55b0(0x14,0x300,s_Illegal_digit_for_given_radix_00670400);
          }
          iVar5 = FUN_0048ae90(0,param_3);
          local_4 = 2;
          uVar6 = FUN_0048b400(*param_1,iVar5,*param_1);
          *param_1 = uVar6;
          local_4 = 0xffffffff;
          if ((iVar5 != 0) && (*(short *)(iVar5 + 2) != 0)) {
            FUN_00631d5c(iVar5);
          }
          iVar4 = FUN_0048ae90(0,iVar4 + -0x30);
          local_4 = 3;
          uVar6 = FUN_0048b050(*param_1,0,iVar4,0,*param_1);
          *param_1 = uVar6;
          local_4 = 0xffffffff;
          if ((iVar4 != 0) && (*(short *)(iVar4 + 2) != 0)) {
            FUN_00631d5c(iVar4);
          }
          iVar4 = FUN_0048ae90(0,10);
          local_4 = 4;
          uVar6 = FUN_0048b400(*param_2,iVar4,*param_2);
          *param_2 = uVar6;
          local_4 = 0xffffffff;
          if ((iVar4 != 0) && (*(short *)(iVar4 + 2) != 0)) {
            FUN_00631d5c(iVar4);
          }
        case 0x23:
          if (*piVar1 == *(int *)(param_4 + 0x10) + -4) {
            FUN_004b28d0();
          }
          else {
            *piVar1 = *piVar1 + 4;
          }
          puVar3 = (undefined4 *)FUN_004b27c0(local_1c,0);
          cVar2 = FUN_0061e299(*(undefined4 *)*puVar3);
          iVar4 = (int)cVar2;
          uVar7 = iVar4 - 0x23;
          if (0x30 < uVar7) {
            ExceptionList = local_c;
            return 1;
          }
          break;
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x4c:
        case 0x53:
switchD_004b1809_caseD_44:
                    /* WARNING: This code block may not be properly labeled as switch case */
          iVar4 = FUN_004b1590(param_4);
          param_4 = iVar4;
          if (0 < iVar4) {
            do {
              iVar5 = FUN_0048ae90(0,10);
              local_4 = 5;
              uVar6 = FUN_0048b400(*param_1,iVar5,*param_1);
              *param_1 = uVar6;
              local_4 = 0xffffffff;
              if ((iVar5 != 0) && (*(short *)(iVar5 + 2) != 0)) {
                FUN_00631d5c(iVar5);
              }
              param_4 = param_4 + -1;
            } while (param_4 != 0);
          }
          if (-1 < iVar4) {
            ExceptionList = local_c;
            return 1;
          }
          iVar4 = -iVar4;
          if (iVar4 < 1) {
            ExceptionList = local_c;
            return 1;
          }
          do {
            iVar5 = FUN_0048ae90(0,10);
            local_4 = 6;
            uVar6 = FUN_0048b400(*param_2,iVar5,*param_2);
            *param_2 = uVar6;
            local_4 = 0xffffffff;
            if ((iVar5 != 0) && (*(short *)(iVar5 + 2) != 0)) {
              FUN_00631d5c(iVar5);
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          ExceptionList = local_c;
          return 1;
        }
      } while( true );
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
                    /* WARNING: This code block may not be properly labeled as switch case */
      iVar4 = cVar2 + -0x30;
      if (param_3 <= iVar4) {
        FUN_004a55b0(0x14,0x300,s_Illegal_digit_for_given_radix_00670400);
      }
      iVar5 = FUN_0048ae90(0,param_3);
      local_4 = 0;
      uVar6 = FUN_0048b400(*param_1,iVar5,*param_1);
      *param_1 = uVar6;
      local_4 = 0xffffffff;
      if ((iVar5 != 0) && (*(short *)(iVar5 + 2) != 0)) {
        FUN_00631d5c(iVar5);
      }
      iVar4 = FUN_0048ae90(0,iVar4);
      local_4 = 1;
      uVar6 = FUN_0048b050(*param_1,0,iVar4,0,*param_1);
      *param_1 = uVar6;
      local_4 = 0xffffffff;
      if ((iVar4 != 0) && (*(short *)(iVar4 + 2) != 0)) {
        FUN_00631d5c(iVar4);
      }
    case 0x23:
      if (*piVar1 == *(int *)(param_4 + 0x10) + -4) {
        FUN_004b28d0();
      }
      else {
        *piVar1 = *piVar1 + 4;
      }
      puVar3 = (undefined4 *)FUN_004b27c0(local_1c,0);
      cVar2 = FUN_0061e299(*(undefined4 *)*puVar3);
      break;
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x4c:
    case 0x53:
      goto switchD_004b1809_caseD_44;
    }
  }
switchD_004b1809_caseD_24:
                    /* WARNING: This code block may not be properly labeled as switch case */
  ExceptionList = local_c;
  return 0;
}

