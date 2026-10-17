
void FUN_004612e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063f409;
  local_c = ExceptionList;
  piVar4 = (int *)0x0;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    iVar1 = param_2[2];
    iVar2 = param_2[1];
    param_1[1] = 0;
    uVar3 = iVar1 - iVar2;
    param_1[2] = 0;
    param_1[3] = 0;
    if (uVar3 != 0) {
      if (uVar3 < 0x81) {
        FUN_00401aa0();
        local_4 = CONCAT31(local_4._1_3_,1);
        piVar4 = *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)FUN_0044bcf0(uVar3 + 7 & 0xfffffff8);
        }
        else {
          *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = *piVar4;
        }
        DAT_0068c164 = 0;
      }
      else {
        piVar4 = (int *)FUN_0044bc90(uVar3);
      }
    }
    param_1[1] = piVar4;
    param_1[2] = piVar4;
    param_1[3] = (int)piVar4 + uVar3;
    iVar1 = param_2[2];
    iVar2 = param_2[1];
    FUN_0061c980(piVar4,iVar2,iVar1 - iVar2);
    param_1[2] = ((int)piVar4 - iVar2) + iVar1;
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
  }
  ExceptionList = local_c;
  return;
}

