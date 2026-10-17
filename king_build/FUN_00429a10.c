
void FUN_00429a10(void)

{
  int ****ppppiVar1;
  int ***pppiVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int ****extraout_ECX;
  int ****extraout_ECX_00;
  int ****local_38;
  int ****ppppiStack_34;
  int ***pppiStack_30;
  int ****local_2c;
  int ***local_20;
  int ***local_1c;
  int ***local_18;
  undefined4 uStack_14;
  int ***local_10;
  int **local_c;
  
  local_2c = (int ****)0x429a20;
  iVar4 = FUN_00429460();
  local_2c = (int ****)0x429a27;
  iVar5 = FUN_00429420();
  if (iVar4 < iVar5) {
    local_18 = (int ***)0x0;
    uStack_14 = 0;
    local_1c = (int ***)DAT_0068a8f0;
    local_2c = (int ****)0x429a4d;
    iVar4 = FUN_00429840();
    local_2c = (int ****)*DAT_0068a8f0;
    local_20 = (int ***)local_2c;
    if (iVar4 < DAT_0066b700) {
      if (local_2c != DAT_0068a8f0) {
        do {
          pppiStack_30 = (int ***)0x429b26;
          local_20 = (int ***)local_2c;
          iVar4 = FUN_0040a950();
          if (((((*(int *)(iVar4 + 0x88) != *(int *)(iVar4 + 0x8c)) &&
                ((double)CONCAT44(uStack_14,local_18) < *(double *)(iVar4 + 0x80))) &&
               (*(int *)(iVar4 + 0x54) == 2)) &&
              ((*(int *)(iVar4 + 0x5c) != 0x101 &&
               (*(int *)(iVar4 + 0x98) == *(int *)(iVar4 + 0x9c))))) &&
             (*(int *****)(iVar4 + 0xa8) == DAT_0068a8f0)) {
            uStack_14 = *(undefined4 *)(iVar4 + 0x84);
            local_18 = *(int ****)(iVar4 + 0x80);
            local_2c = (int ****)local_20;
            pppiStack_30 = (int ***)0x429b9b;
            puVar6 = (undefined4 *)FUN_004042b0();
            local_1c = (int ***)*puVar6;
          }
          local_2c = (int ****)*local_20;
          local_20 = (int ***)local_2c;
        } while (local_2c != DAT_0068a8f0);
      }
    }
    else if (local_2c != DAT_0068a8f0) {
      do {
        pppiStack_30 = (int ***)0x429a82;
        local_20 = (int ***)local_2c;
        iVar4 = FUN_0040a950();
        if (((*(int *)(iVar4 + 0x88) != *(int *)(iVar4 + 0x8c)) &&
            ((double)CONCAT44(uStack_14,local_18) < *(double *)(iVar4 + 0x80))) &&
           ((*(int *)(iVar4 + 0x54) == 2 &&
            ((*(int *)(iVar4 + 0x5c) != 0x101 && (*(int *)(iVar4 + 0x98) != *(int *)(iVar4 + 0x9c)))
            )))) {
          uStack_14 = *(undefined4 *)(iVar4 + 0x84);
          local_18 = *(int ****)(iVar4 + 0x80);
          local_2c = (int ****)local_20;
          pppiStack_30 = (int ***)0x429ae8;
          puVar6 = (undefined4 *)FUN_004042b0();
          local_1c = (int ***)*puVar6;
        }
        local_2c = (int ****)*local_20;
        local_20 = (int ***)local_2c;
      } while (local_2c != DAT_0068a8f0);
    }
    if ((int ****)local_1c != DAT_0068a8f0) {
      local_2c = (int ****)&DAT_0068a928;
      pppiStack_30 = local_10;
      local_38 = (int ****)&ppppiStack_34;
      ppppiStack_34 = (int ****)local_20;
      FUN_004896a0();
      local_38 = extraout_ECX;
      FUN_004af790(&local_38);
      FUN_0045ef00(&local_10);
      if ((int ****)local_10 == DAT_0068a8f0) {
        local_18 = (int ***)DAT_0068a8f0;
      }
      else {
        local_2c = (int ****)local_10;
        pppiStack_30 = (int ***)0x429c10;
        FUN_004042b0();
      }
      if ((int ****)local_18 != DAT_0068a8f0) {
        ppppiStack_34 = &local_1c;
        local_38 = (int ****)0x429c2f;
        pppiStack_30 = local_18;
        local_2c = (int ****)local_18;
        FUN_0041d3f0();
        ppppiStack_34 = (int ****)0x429c34;
        FUN_00476c60();
      }
    }
  }
  local_20 = *DAT_0068a8f0;
  iVar4 = 0;
  pppiStack_30 = local_20;
  if ((int ****)local_20 != DAT_0068a8f0) {
    do {
      ppppiStack_34 = &local_20;
      local_38 = (int ****)0x429c58;
      local_2c = (int ****)pppiStack_30;
      FUN_0041d3f0();
      ppppiStack_34 = (int ****)0x429c5f;
      FUN_004042b0();
      pppiStack_30 = (int ***)0x429c64;
      cVar3 = FUN_004190d0();
      if (cVar3 != '\0') {
        iVar4 = iVar4 + 1;
      }
      local_20 = (int ***)*local_20;
      pppiStack_30 = (int ***)DAT_0068a8f0;
    } while ((int ****)local_20 != DAT_0068a8f0);
    if (1 < iVar4) {
      return;
    }
  }
  local_2c = &local_1c;
  pppiStack_30 = (int ***)0x429c93;
  FUN_00429770();
  pppiVar2 = local_1c;
  if ((int ****)local_1c != DAT_0068a8f0) {
    local_c = local_1c[0x23];
    local_10 = (int ***)local_1c[0x22];
    ppppiVar1 = (int ****)(local_1c + 0x2c);
    if ((int ****)local_1c[0x2c] == DAT_0068a8f0) {
      ppppiVar1 = (int ****)(local_1c + 0x28);
      if (local_1c[0x28] != local_1c[0x29]) {
        do {
          local_2c = (int ****)0x0;
          pppiStack_30 = (int ***)0x429d33;
          ppppiStack_34 = (int ****)FUN_00448470();
          local_38 = (int ****)0x429d3c;
          FUN_0041d3f0();
          local_38 = &local_1c;
          ppppiStack_34 = extraout_ECX_00;
          FUN_0041d3f0();
          local_38 = (int ****)0x429d4e;
          FUN_00477010();
        } while (*ppppiVar1 != (int ***)pppiVar2[0x29]);
      }
      if ((int ***)pppiVar2[0x17] == (int ***)0x1) {
        local_2c = (int ****)s_EMPLOYEES_QUIT_0066cbb8;
        pppiStack_30 = (int ***)0x429d6e;
        pppiStack_30 = (int ***)FUN_0040e1d0();
        ppppiStack_34 = (int ****)0x429d74;
        FUN_0056a570();
      }
      local_1c[0x22] = (int **)local_10;
      local_1c[0x23] = local_c;
      if (1 < DAT_0066b700) {
        DAT_0066b700 = DAT_0066b700 + -1;
      }
    }
    else {
      local_2c = (int ****)0x0;
      pppiStack_30 = (int ***)DAT_0068a8f0;
      ppppiStack_34 = &local_1c;
      local_38 = (int ****)0x429cde;
      FUN_0041d3f0();
      local_38 = ppppiVar1;
      FUN_0041d3f0();
      local_38 = (int ****)0x429cec;
      FUN_00477010();
      if ((*ppppiVar1)[0x17] == (int **)0x1) {
        local_2c = (int ****)s_EMPLOYEE_QUIT_0066cbc8;
        pppiStack_30 = (int ***)0x429d05;
        pppiStack_30 = (int ***)FUN_0040e1d0();
        ppppiStack_34 = (int ****)0x429d0b;
        FUN_0056a570();
        return;
      }
    }
  }
  return;
}

