
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004209a0(void)

{
  int ***pppiVar1;
  char cVar2;
  int iVar3;
  double *pdVar4;
  int ***pppiVar5;
  char *pcVar6;
  int ***pppiStack_5c;
  int ***pppiStack_58;
  int ***pppiStack_54;
  int ***local_50;
  int ***local_44;
  undefined8 local_40;
  char *local_34;
  undefined *local_30;
  int **local_2c [6];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063cc78;
  local_14 = ExceptionList;
  local_50 = (int ***)0x8;
  pppiStack_54 = (int ***)s_START__0066b830;
  local_34 = s_changeLanes___0066c840;
  local_30 = &DAT_0071d768;
  pppiStack_58 = (int ***)0x4209e1;
  ExceptionList = &local_14;
  FUN_00401870();
  local_50 = (int ***)s_changeLanes___0066c840;
  pppiStack_54 = (int ***)0x4209f0;
  FUN_004018b0();
  DAT_0068c10c = DAT_0068c10c + 1;
  local_c = 0;
  local_50 = (int ***)*DAT_0068a8f0;
  if (local_50 != DAT_0068a8f0) {
    do {
      local_40 = (double)CONCAT44(local_40._4_4_,&local_50);
      pppiStack_54 = (int ***)0x420a27;
      local_44 = local_50;
      iVar3 = FUN_0040a950();
      if (iVar3 != 0) {
        local_40 = (double)CONCAT44(local_40._4_4_,&local_50);
        local_50 = local_44;
        pppiStack_54 = (int ***)0x420a44;
        iVar3 = FUN_0040a950();
        local_50 = *(int ****)(iVar3 + 0x4c);
        if (local_50 != (int ***)0xffffffff) {
          pppiStack_54 = (int ***)0x420a59;
          iVar3 = FUN_004d89a0();
          if (iVar3 != 0) {
            local_40 = (double)CONCAT44(local_40._4_4_,&local_50);
            local_50 = local_44;
            pppiStack_54 = (int ***)0x420a7b;
            iVar3 = FUN_0040a950();
            pppiStack_54 = *(int ****)(iVar3 + 0x54);
            if (pppiStack_54 != (int ***)0x1) {
              pppiStack_58 = (int ***)&local_44;
              local_40 = (double)CONCAT44((int)((ulonglong)local_40 >> 0x20),&pppiStack_54);
              pppiStack_5c = (int ***)0x420aa2;
              local_50 = pppiStack_54;
              FUN_0041d3f0();
              pppiStack_58 = (int ***)0x420aa9;
              FUN_004042b0();
              pppiStack_54 = (int ***)0x420aae;
              cVar2 = FUN_00420930();
              if (cVar2 == '\0') {
                pppiStack_54 = (int ***)&local_44;
                local_40 = (double)CONCAT44(local_40._4_4_,&local_50);
                pppiStack_58 = (int ***)0x420aca;
                FUN_0041d3f0();
                pppiStack_54 = (int ***)0x420acf;
                pppiStack_54 = (int ***)FUN_0040a950();
                pppiStack_58 = local_2c;
                pppiStack_5c = (int ***)0x420ada;
                pdVar4 = (double *)FUN_00420c50();
                local_40 = pdVar4[2] - _DAT_0068aa20;
                if (SQRT(local_40 * local_40 +
                         (pdVar4[1] - _DAT_0068aa18) * (pdVar4[1] - _DAT_0068aa18) +
                         (*pdVar4 - _DAT_0068aa10) * (*pdVar4 - _DAT_0068aa10)) < _DAT_0064a690) {
                  local_40._4_4_ = (undefined4)((ulonglong)local_40 >> 0x20);
                  local_50 = local_44;
                  pppiStack_54 = (int ***)0x420b34;
                  local_40._0_4_ = &local_50;
                  pppiStack_54 = (int ***)FUN_0040a950();
                  pppiStack_58 = (int ***)0x420b3a;
                  pppiVar5 = (int ***)FUN_00420450();
                  local_40 = (double)CONCAT44(local_40._4_4_,&local_50);
                  local_50 = local_44;
                  pppiStack_54 = (int ***)0x420b50;
                  iVar3 = FUN_0040a950();
                  pppiVar1 = *(int ****)(iVar3 + 0x370);
                  if (pppiVar1 != pppiVar5) {
                    local_50 = (int ***)0x0;
                    local_40._4_4_ = (undefined4)((ulonglong)local_40 >> 0x20);
                    local_40._0_4_ = &pppiStack_5c;
                    pppiStack_5c = pppiVar1;
                    pppiStack_58 = pppiVar1;
                    pppiStack_54 = pppiVar5;
                    FUN_0041d3f0(&local_44);
                    FUN_004042b0();
                    pppiStack_5c = (int ***)0x420b84;
                    FUN_004015a0();
                    local_40 = (double)CONCAT44(local_40._4_4_,&local_50);
                    local_50 = local_44;
                    pppiStack_54 = (int ***)0x420b98;
                    iVar3 = FUN_0040a950();
                    *(int ****)(iVar3 + 0x370) = pppiVar5;
                  }
                }
              }
            }
          }
        }
      }
      local_50 = (int ***)*local_44;
    } while (local_50 != DAT_0068a8f0);
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar6 = s_changeLanes___0066c840;
  cVar2 = s_changeLanes___0066c840[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
      cVar2 = *pcVar6;
    }
  }
  ExceptionList = local_14;
  return;
}

