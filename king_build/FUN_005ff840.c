
void FUN_005ff840(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint _Size;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006493d9;
  local_c = ExceptionList;
  piVar3 = (void *)0x0;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    _Size = param_2[1] - *param_2;
    ExceptionList = &local_c;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (_Size != 0) {
      if (_Size < 0x81) {
        FUN_00401aa0();
        local_4 = CONCAT31(local_4._1_3_,1);
        piVar3 = *(int **)(&DAT_0068c120 + (_Size + 7 >> 3) * 4);
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)FUN_0044bcf0(_Size + 7 & 0xfffffff8);
        }
        else {
          *(int *)(&DAT_0068c120 + (_Size + 7 >> 3) * 4) = *piVar3;
        }
        DAT_0068c164 = 0;
      }
      else {
        piVar3 = _malloc(_Size);
        if (piVar3 == (void *)0x0) {
          piVar3 = (int *)FUN_00458210(_Size);
        }
      }
    }
    *param_1 = piVar3;
    param_1[1] = piVar3;
    param_1[2] = (int)piVar3 + _Size;
    iVar2 = param_2[1];
    iVar1 = *param_2;
    FUN_0061c980(piVar3,iVar1,iVar2 - iVar1);
    param_1[1] = (int)piVar3 + (iVar2 - iVar1);
    piVar3 = param_2 + 4;
    piVar4 = param_1 + 4;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
  }
  ExceptionList = local_c;
  return;
}

