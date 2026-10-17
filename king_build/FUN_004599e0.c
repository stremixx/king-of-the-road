
void FUN_004599e0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ef18;
  local_c = ExceptionList;
  piVar2 = (undefined4 *)0x0;
  if (param_1 != 0) {
    uVar5 = param_1 * 4;
    if (uVar5 < 0x81) {
      ExceptionList = &local_c;
      FUN_00401aa0();
      local_4 = 0;
      piVar2 = *(int **)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4);
      if (piVar2 == (int *)0x0) {
        uVar5 = uVar5 + 7 & 0xfffffff8;
        param_1 = 0x14;
        piVar2 = (int *)FUN_0045a160(uVar5,&param_1);
        if (param_1 != 1) {
          puVar3 = (undefined4 *)((int)piVar2 + uVar5);
          *(undefined4 **)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4) = puVar3;
          iVar4 = 1;
          puVar1 = puVar3;
          if (param_1 != 2) {
            do {
              puVar3 = (undefined4 *)((int)puVar1 + uVar5);
              *puVar1 = puVar3;
              iVar4 = iVar4 + 1;
              puVar1 = puVar3;
            } while (param_1 + -1 != iVar4);
          }
          *puVar3 = 0;
        }
      }
      else {
        *(int *)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4) = *piVar2;
      }
      DAT_0068c164 = 0;
    }
    else {
      ExceptionList = &local_c;
      piVar2 = _malloc(uVar5);
      if (piVar2 == (undefined4 *)0x0) {
        piVar2 = (int *)FUN_00458210(uVar5);
      }
    }
  }
  iVar4 = param_3 - param_2 >> 2;
  if (0 < iVar4) {
    param_2 = param_2 - (int)piVar2;
    do {
      *piVar2 = *(undefined4 *)(param_2 + (int)piVar2);
      piVar2 = piVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  ExceptionList = local_c;
  return;
}

