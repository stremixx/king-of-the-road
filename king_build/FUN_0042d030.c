
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042d030(void)

{
  char cVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  int ***pppiVar13;
  int ***pppiStack_b8;
  int ***pppiStack_b4;
  int ***local_b0;
  int ***local_9c;
  undefined8 local_98;
  double local_90;
  char *local_84;
  undefined *local_80;
  int **local_7c [6];
  int local_64 [5];
  int local_50;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063d128;
  local_14 = ExceptionList;
  local_b0 = (int ***)0x8;
  pppiStack_b4 = (int ***)s_START__0066b830;
  local_84 = s_updatePlayerBoxes___0066cd3c;
  local_80 = &DAT_0071d768;
  pppiStack_b8 = (int ***)0x42d076;
  ExceptionList = &local_14;
  FUN_00401870();
  local_b0 = (int ***)s_updatePlayerBoxes___0066cd3c;
  pppiStack_b4 = (int ***)0x42d085;
  FUN_004018b0();
  local_c = 0;
  local_b0 = (int ***)*DAT_0068a8f0;
  if (local_b0 != DAT_0068a8f0) {
    do {
      local_98 = (double)CONCAT44(local_98._4_4_,&local_b0);
      pppiStack_b4 = (int ***)0x42d0b7;
      local_9c = local_b0;
      iVar5 = FUN_0040a950();
      local_b0 = *(int ****)(iVar5 + 0x54);
      if (local_b0 == (int ***)0x1) {
        pppiStack_b4 = (int ***)&local_9c;
        local_98 = (double)CONCAT44(local_98._4_4_,&local_b0);
        pppiStack_b8 = (int ***)0x42d0d7;
        FUN_0041d3f0();
        pppiStack_b4 = (int ***)0x42d0dc;
        iVar5 = FUN_0040a950();
        piVar10 = (int *)(iVar5 + 0x20);
        piVar12 = local_64;
        for (iVar8 = 8; iVar5 = local_64[0], iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar12 = *piVar10;
          piVar10 = piVar10 + 1;
          piVar12 = piVar12 + 1;
        }
        if (local_64[0] != -1) {
          local_b0 = local_9c;
          pppiStack_b4 = (int ***)0x42d10f;
          local_98._0_4_ = &local_b0;
          iVar8 = FUN_0040a950();
          puVar11 = (undefined4 *)(iVar8 + 0x268);
          if ((*(byte *)(iVar8 + 0x58) & 1) == 0) {
            puVar11 = (undefined4 *)(iVar8 + 0x130);
          }
          pppiVar13 = local_7c;
          for (local_b0 = (int ***)0x6; local_b0 != (int ***)0x0;
              local_b0 = (int ***)((int)local_b0 + -1)) {
            *pppiVar13 = (int **)*puVar11;
            puVar11 = puVar11 + 1;
            pppiVar13 = pppiVar13 + 1;
          }
          local_98._0_4_ = &local_b0;
          pppiStack_b4 = (int ***)&local_9c;
          pppiStack_b8 = (int ***)0x42d142;
          FUN_0041d3f0();
          pppiStack_b4 = (int ***)0x42d147;
          iVar8 = FUN_0040a950();
          if (*(int *)(iVar8 + 0x3a8) == iVar5) {
            pppiStack_b4 = local_7c;
            pppiStack_b8 = (int ***)&local_9c;
            local_98._0_4_ = &pppiStack_b4;
            local_b0 = pppiStack_b4;
            FUN_0041d3f0();
            pppiStack_b8 = (int ***)0x42d1e2;
            FUN_0040a950();
            pppiStack_b4 = (int ***)0x42d1f2;
            FUN_00488000();
            local_98 = (double)CONCAT44(local_98._4_4_,&local_b0);
            local_b0 = local_9c;
            pppiStack_b4 = (int ***)0x42d204;
            iVar8 = FUN_0040a950();
            if ((*(uint *)(*(int *)(DAT_0068be98 + *(int *)(iVar8 + 0x3a8) * 4) + 0x10) & 0x200) ==
                0) {
              local_b0 = local_9c;
              pppiStack_b4 = (int ***)0x42d230;
              local_98._0_4_ = &local_b0;
              iVar8 = FUN_0040a950();
              pppiStack_b4 = (int ***)&local_9c;
              local_98 = (double)CONCAT44(local_98._4_4_,&local_b0);
              pppiStack_b8 = (int ***)0x42d242;
              FUN_0041d3f0();
              pppiStack_b4 = (int ***)0x42d247;
              iVar9 = FUN_0040a950();
              dVar2 = *(double *)(iVar9 + 0x378) - *(double *)(iVar8 + 0x390);
              dVar3 = *(double *)(iVar9 + 0x380) - *(double *)(iVar8 + 0x398);
              dVar4 = *(double *)(iVar9 + 0x388) - *(double *)(iVar8 + 0x3a0);
              local_b0 = local_9c;
              local_98._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
              local_90 = SQRT(dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2);
              pppiStack_b4 = (int ***)0x42d29d;
              local_98._0_4_ = &local_b0;
              iVar8 = FUN_0040a950();
              local_98 = (double)CONCAT44(local_98._4_4_,&local_b0);
              iVar8 = *(int *)(DAT_0068be98 + *(int *)(iVar8 + 0x3a8) * 4);
              pppiStack_b4 = (int ***)&local_9c;
              pppiStack_b8 = (int ***)0x42d2c1;
              FUN_0041d3f0();
              pppiStack_b4 = (int ***)0x42d2c6;
              FUN_0040a950();
              local_b0 = (int ***)0x42d2d6;
              iVar9 = FUN_00424000();
              dVar2 = *(double *)(iVar9 + 0x88) - *(double *)(iVar8 + 0xa0);
              dVar3 = *(double *)(iVar9 + 0x90) - *(double *)(iVar8 + 0xa8);
              local_98 = *(double *)(iVar9 + 0x98) - *(double *)(iVar8 + 0xb0);
              iVar5 = *(int *)(*(int *)(*(int *)(DAT_0068be98 + iVar5 * 4) + 0x78) + local_50 * 4);
              if (iVar5 == 0) {
                pbVar6 = (byte *)0x0;
              }
              else {
                pbVar6 = (byte *)(iVar5 + 8);
              }
              if (((*pbVar6 & 0x10) == 0) &&
                 (SQRT(local_98 * local_98 + dVar3 * dVar3 + dVar2 * dVar2) <
                  local_90 * _DAT_0064a7a8)) {
                local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
                local_b0 = local_9c;
                pppiStack_b4 = (int ***)0x42d35c;
                local_98._0_4_ = &local_b0;
                iVar5 = FUN_0040a950();
                iVar5 = *(int *)(DAT_0068be98 + *(int *)(iVar5 + 0x3a8) * 4);
                *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) | 0x200;
                local_b0 = local_9c;
                pppiStack_b4 = (int ***)0x42d383;
                local_98._0_4_ = &local_b0;
                iVar5 = FUN_0040a950();
                local_b0 = *(int ****)(iVar5 + 0x3a8);
                local_98 = (double)CONCAT44(local_98._4_4_,&pppiStack_b8);
                FUN_0041d3f0(&local_9c);
                FUN_004042b0();
                pppiStack_b8 = (int ***)0x42d3b1;
                FUN_004840e0();
              }
            }
          }
          else {
            local_98._0_4_ = &local_b0;
            local_b0 = local_9c;
            pppiStack_b4 = (int ***)0x42d16b;
            iVar8 = FUN_0040a950();
            *(int *)(iVar8 + 0x3a8) = iVar5;
            local_b0 = local_7c;
            pppiStack_b4 = local_7c;
            pppiStack_b8 = (int ***)0x42d187;
            iVar5 = FUN_00487f80();
            pppiStack_b4 = (int ***)&local_9c;
            local_98 = (double)CONCAT44(local_98._4_4_,&local_b0);
            pppiStack_b8 = (int ***)0x42d19a;
            FUN_0041d3f0();
            pppiStack_b4 = (int ***)0x42d19f;
            iVar8 = FUN_0040a950();
            iVar8 = iVar8 + 0x378;
            iVar9 = 2;
            iVar5 = iVar5 - iVar8;
            do {
              local_b0 = (int ***)(iVar5 + iVar8);
              pppiStack_b4 = (int ***)0x42d1bc;
              FUN_00405ed0();
              iVar8 = iVar8 + 0x18;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
      }
      local_b0 = (int ***)*local_9c;
    } while (local_b0 != DAT_0068a8f0);
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar7 = s_updatePlayerBoxes___0066cd3c;
  cVar1 = s_updatePlayerBoxes___0066cd3c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar7;
    }
  }
  ExceptionList = local_14;
  return;
}

