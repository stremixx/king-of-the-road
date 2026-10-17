
void * FUN_00458d60(uint param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ee18;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  piVar2 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x81) {
      uVar4 = param_1 + 7;
      FUN_00401aa0();
      local_4 = 0;
      piVar2 = *(int **)(&DAT_0068c120 + (uVar4 >> 3) * 4);
      if (piVar2 == (int *)0x0) {
        uVar4 = uVar4 & 0xfffffff8;
        param_1 = 0x14;
        piVar2 = (int *)FUN_0045a160(uVar4,&param_1);
        if (param_1 != 1) {
          puVar3 = (undefined4 *)((int)piVar2 + uVar4);
          *(undefined4 **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = puVar3;
          iVar5 = 1;
          puVar1 = puVar3;
          if (param_1 != 2) {
            do {
              puVar3 = (undefined4 *)((int)puVar1 + uVar4);
              *puVar1 = puVar3;
              iVar5 = iVar5 + 1;
              puVar1 = puVar3;
            } while (param_1 - 1 != iVar5);
          }
          *puVar3 = 0;
        }
      }
      else {
        *(int *)(&DAT_0068c120 + (uVar4 >> 3) * 4) = *piVar2;
      }
      DAT_0068c164 = 0;
    }
    else {
      piVar2 = _malloc(param_1);
      if (piVar2 == (void *)0x0) {
        piVar2 = (int *)FUN_00458210(uVar4);
      }
    }
  }
  FUN_0061c980(piVar2,param_2,param_3 - param_2);
  *unaff_FS_OFFSET = local_c;
  return piVar2;
}

