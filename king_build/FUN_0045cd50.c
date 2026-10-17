
/* WARNING: Removing unreachable block (ram,0x0045cea7) */
/* WARNING: Removing unreachable block (ram,0x0045cece) */
/* WARNING: Removing unreachable block (ram,0x0045ce23) */
/* WARNING: Removing unreachable block (ram,0x0045ceb1) */

int * FUN_0045cd50(int *param_1,int *param_2,uint param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 *local_14;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar3 = param_3;
  piVar5 = param_2;
  puStack_8 = &LAB_0063f0c8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  puVar1 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_4 = 0;
  do {
    if (param_1 == piVar5) {
      if (puVar1 != (undefined4 *)0x0) {
        uVar3 = (*(int *)(param_5 + 0xdc) + 1U) % 0x37;
        uVar4 = (*(int *)(param_5 + 0xe0) + 1U) % 0x37;
        *(uint *)(param_5 + 0xdc) = uVar3;
        *(uint *)(param_5 + 0xe0) = uVar4;
        *(int *)(param_5 + uVar3 * 4) =
             *(int *)(param_5 + uVar3 * 4) - *(int *)(param_5 + uVar4 * 4);
        piVar5 = *(int **)((*(uint *)(param_5 + *(int *)(param_5 + 0xdc) * 4) %
                           (uint)((int)puVar1 >> 2)) * 4);
      }
      *unaff_FS_OFFSET = local_c;
      return piVar5;
    }
    uVar4 = *(uint *)(*param_1 + 0xc);
    if ((uVar4 & 8) == 0) {
      if (*(int *)(param_4 + 0x5c) == 2) {
        if (((uVar3 & 1) == 0) || ((uVar4 & 2) == 0)) {
          if ((uVar3 & 1) != 0) goto LAB_0045ce02;
          uVar4 = uVar4 & 1;
          goto joined_r0x0045cdc6;
        }
      }
      else {
        uVar4 = uVar4 & 0x40;
joined_r0x0045cdc6:
        if (uVar4 == 0) goto LAB_0045ce02;
      }
      if (puVar1 == (undefined4 *)0x0) {
        FUN_00464200(0,&param_1);
        puVar1 = local_14;
      }
      else {
        puVar2 = (undefined4 *)0x0;
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = param_1;
          puVar2 = local_14;
        }
        local_14 = puVar2 + 1;
        puVar1 = local_14;
      }
    }
LAB_0045ce02:
    param_1 = param_1 + 1;
  } while( true );
}

