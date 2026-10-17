
void __thiscall FUN_00487830(int param_1,uint param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  void **ppvVar3;
  int *piVar4;
  undefined4 uVar5;
  uint _Size;
  uint local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00640639;
  local_c = ExceptionList;
  local_18 = 0;
  ppvVar3 = &local_c;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x6000) = 0;
    return;
  }
  do {
    ExceptionList = ppvVar3;
    puVar1 = (undefined4 *)(param_1 + local_18 * 0xc);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (param_3[1] - *param_3) / 0xc;
      piVar4 = (void *)0x0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      if (iVar2 != 0) {
        _Size = iVar2 * 0xc;
        if (_Size < 0x81) {
          FUN_00401aa0();
          local_4 = CONCAT31(local_4._1_3_,1);
          piVar4 = *(int **)(&DAT_0068c120 + (_Size + 7 >> 3) * 4);
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)FUN_0044bcf0(_Size + 7 & 0xfffffff8);
          }
          else {
            *(int *)(&DAT_0068c120 + (_Size + 7 >> 3) * 4) = *piVar4;
          }
          DAT_0068c164 = 0;
        }
        else {
          piVar4 = _malloc(_Size);
          if (piVar4 == (void *)0x0) {
            piVar4 = (int *)FUN_00458210(_Size);
          }
        }
      }
      *puVar1 = piVar4;
      puVar1[1] = piVar4;
      puVar1[2] = (void *)((int)piVar4 + iVar2 * 0xc);
      local_4 = CONCAT31(local_4._1_3_,2);
      uVar5 = FUN_0046f490(*param_3,param_3[1],piVar4,param_3);
      puVar1[1] = uVar5;
    }
    local_18 = local_18 + 1;
    ppvVar3 = ExceptionList;
  } while (local_18 < param_2);
  *(uint *)(param_1 + 0x6000) = param_2;
  ExceptionList = local_c;
  return;
}

