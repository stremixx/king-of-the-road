
void FUN_00471f10(int *param_1)

{
  void **ppvVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *local_a4 [2];
  int local_9c;
  int local_90;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f9d6;
  local_c = ExceptionList;
  local_a4[0] = (int *)*DAT_0068a8f0;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (local_a4[0] != DAT_0068a8f0) {
    do {
      iVar2 = FUN_0040a950();
      if (iVar2 != 0) {
        FUN_0041d3f0(local_a4);
        FUN_004042b0();
        FUN_00417430();
      }
      local_a4[0] = (int *)*local_a4[0];
      ppvVar1 = ExceptionList;
    } while (local_a4[0] != DAT_0068a8f0);
  }
  ExceptionList = ppvVar1;
  iVar2 = FUN_00477920();
  if (iVar2 == 0) {
    ExceptionList = local_c;
    return;
  }
  FUN_00443830();
  local_4 = 0;
LAB_00471fd3:
  do {
    piVar5 = (int *)*param_1;
    while( true ) {
      if (piVar5 == (int *)param_1[1]) {
        iVar2 = *param_1;
        if (iVar2 != param_1[1]) {
          do {
            FUN_004174c0();
            iVar2 = iVar2 + 0x10;
          } while (iVar2 != param_1[1]);
        }
        DAT_0068c0c4 = param_1[3];
        local_4 = 1;
        for (puVar4 = local_24; puVar4 != local_20; puVar4 = puVar4 + 4) {
          FUN_00460d40();
        }
        local_4 = 0xffffffff;
        iVar2 = local_1c - (int)local_24 >> 4;
        if (iVar2 == 0) {
          ExceptionList = local_c;
          return;
        }
        if (0x80 < (uint)(iVar2 * 0x10)) {
          FUN_00457ad0();
          ExceptionList = local_c;
          return;
        }
        iVar2 = FUN_0044b6d0();
        FUN_0044b910();
        *local_24 = *(undefined4 *)(&DAT_0068c124 + iVar2 * 4);
        *(undefined4 **)(&DAT_0068c124 + iVar2 * 4) = local_24;
        FUN_0044ba20();
        ExceptionList = local_c;
        return;
      }
      if (*(int *)(*piVar5 + 0x58) != 0x12345678) {
        if (piVar5 + 4 != (int *)param_1[1]) {
          FUN_0047c550(piVar5 + 4,(int *)param_1[1],piVar5);
        }
        param_1[1] = param_1[1] + -0x10;
        FUN_0046c840();
        goto LAB_00471fd3;
      }
      iVar2 = FUN_00477850();
      if (((iVar2 == 0) || (piVar3 = (int *)FUN_00477850(), *piVar3 != local_9c)) ||
         (piVar3[3] != local_90)) break;
      piVar5 = piVar5 + 4;
    }
    param_1[3] = param_1[3] + 1;
    if (piVar5 + 4 != (int *)param_1[1]) {
      FUN_0047c550(piVar5 + 4,(int *)param_1[1],piVar5);
    }
    param_1[1] = param_1[1] + -0x10;
    FUN_004497b0();
  } while( true );
}

