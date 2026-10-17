
void __thiscall FUN_004879a0(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  LONG LVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00640650;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  if (param_3 != param_4) {
    puVar4 = (undefined4 *)((param_4 - param_3) / 0xc);
    iVar10 = param_1[1];
    local_1c = puVar4;
    if ((undefined4 *)((param_1[2] - iVar10) / 0xc) < puVar4) {
      local_18 = (undefined4 *)((iVar10 - *param_1) / 0xc);
      ppuVar5 = &local_1c;
      if (puVar4 <= local_18) {
        ppuVar5 = &local_18;
      }
      local_1c = (undefined4 *)((int)*ppuVar5 + (int)local_18);
      if (local_1c == (undefined4 *)0x0) {
        local_18 = (undefined4 *)0x0;
        ExceptionList = &local_10;
        local_14 = &stack0xffffffd0;
      }
      else {
        ExceptionList = &local_10;
        local_18 = (undefined4 *)FUN_0044b6e0((int)local_1c * 0xc);
      }
      puVar4 = local_18;
      local_8 = 0;
      uVar6 = FUN_0046f490(*param_1,param_2,local_18,param_2);
      uVar6 = FUN_0046f490(param_3,param_4,uVar6,param_2);
      iVar7 = FUN_0046f490(param_2,param_1[1],uVar6,param_2);
      iVar10 = *param_1;
      local_8 = 0xffffffff;
      for (; iVar10 != param_1[1]; iVar10 = iVar10 + 0xc) {
      }
      piVar1 = (int *)*param_1;
      iVar10 = (param_1[2] - (int)piVar1) / 0xc;
      if (iVar10 != 0) {
        uVar8 = iVar10 * 0xc;
        if (uVar8 < 0x81) {
          LVar9 = InterlockedExchange(&DAT_0068c164,1);
          uVar3 = DAT_0068c168;
          uVar2 = DAT_0066b83c;
          if (LVar9 != 0) {
            uVar12 = 0;
            if (DAT_0066b83c != 0) {
              do {
                if (((uVar3 >> 1 <= uVar12) && (DAT_0068c164 == 0)) &&
                   (LVar9 = InterlockedExchange(&DAT_0068c164,1), LVar9 == 0)) {
                  DAT_0066b83c = 1000;
                  puVar4 = local_18;
                  DAT_0068c168 = uVar12;
                  goto LAB_00487d12;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar2);
            }
            DAT_0066b83c = 0x1e;
            iVar10 = 0;
            while( true ) {
              iVar13 = iVar10 + 6;
              if (0x1b < iVar13) {
                iVar13 = 0x1b;
              }
              LVar9 = InterlockedExchange(&DAT_0068c164,1);
              puVar4 = local_18;
              if (LVar9 == 0) break;
              FUN_00402b10(iVar13);
              iVar10 = iVar10 + 1;
            }
          }
LAB_00487d12:
          *piVar1 = *(int *)(&DAT_0068c120 + (uVar8 + 7 >> 3) * 4);
          *(int **)(&DAT_0068c120 + (uVar8 + 7 >> 3) * 4) = piVar1;
          DAT_0068c164 = 0;
        }
        else {
          FUN_0061c888(piVar1);
        }
      }
      *param_1 = (int)puVar4;
      param_1[1] = iVar7;
      param_1[2] = (int)(puVar4 + (int)local_1c * 3);
      ExceptionList = local_10;
      return;
    }
    local_1c = (undefined4 *)((iVar10 - (int)param_2) / 0xc);
    puVar11 = (undefined4 *)param_1[1];
    if (puVar4 < local_1c) {
      local_1c = puVar11 + (int)puVar4 * -3;
      ExceptionList = &local_10;
      local_14 = &stack0xffffffd0;
      FUN_0046f490(local_1c,puVar11,puVar11,param_2);
      param_1[1] = param_1[1] + (int)puVar4 * 0xc;
      iVar10 = ((int)local_1c - (int)param_2) / 0xc;
      puVar4 = local_1c;
      if (0 < iVar10) {
        do {
          iVar10 = iVar10 + -1;
          puVar11[-3] = puVar4[-3];
          puVar11[-2] = puVar4[-2];
          puVar11[-1] = puVar4[-1];
          puVar4 = puVar4 + -3;
          puVar11 = puVar11 + -3;
        } while (iVar10 != 0);
      }
      FUN_0047c830(param_3,param_4,param_2,param_2,0);
    }
    else {
      local_18 = (undefined4 *)((int)local_1c * 0xc);
      ExceptionList = &local_10;
      local_14 = &stack0xffffffd0;
      FUN_0046f490((int)local_18 + param_3,param_4,puVar11,param_2);
      iVar10 = param_1[1] + ((int)puVar4 - (int)local_1c) * 0xc;
      param_1[1] = iVar10;
      FUN_0046f490(param_2,puVar11,iVar10,param_2);
      iVar10 = (int)local_18 / 0xc;
      param_1[1] = param_1[1] + (int)local_18;
      if (0 < iVar10) {
        puVar4 = param_2;
        do {
          puVar11 = (undefined4 *)((param_3 - (int)param_2) + (int)puVar4);
          iVar10 = iVar10 + -1;
          *puVar4 = *puVar11;
          puVar4[1] = puVar11[1];
          puVar4[2] = puVar11[2];
          puVar4 = puVar4 + 3;
        } while (iVar10 != 0);
        ExceptionList = local_10;
        return;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

