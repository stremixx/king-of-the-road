
void * FUN_0044acb0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e3e8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  if (param_1 == 0) {
    piVar3 = (void *)0x0;
  }
  else {
    uVar4 = param_1 * 4;
    if (uVar4 < 0x81) {
      FUN_00401aa0();
      local_4 = 0;
      piVar3 = *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
      if (piVar3 == (int *)0x0) {
        uVar4 = uVar4 + 7 & 0xfffffff8;
        param_1 = 0x14;
        piVar3 = (int *)FUN_0045a160(uVar4,&param_1);
        if (param_1 != 1) {
          puVar2 = (undefined4 *)((int)piVar3 + uVar4);
          *(undefined4 **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = puVar2;
          iVar5 = 1;
          puVar1 = puVar2;
          if (param_1 != 2) {
            do {
              puVar2 = (undefined4 *)((int)puVar1 + uVar4);
              *puVar1 = puVar2;
              iVar5 = iVar5 + 1;
              puVar1 = puVar2;
            } while (param_1 + -1 != iVar5);
          }
          *puVar2 = 0;
        }
      }
      else {
        *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = *piVar3;
      }
      DAT_0068c164 = 0;
    }
    else {
      piVar3 = _malloc(uVar4);
      if (piVar3 == (void *)0x0) {
        piVar3 = (int *)FUN_00458210(uVar4);
      }
    }
  }
  FUN_0061c980(piVar3,param_2,(param_3 - param_2 >> 2) << 2);
  *unaff_FS_OFFSET = local_c;
  return piVar3;
}

