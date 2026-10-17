
/* WARNING: Removing unreachable block (ram,0x0045dccc) */
/* WARNING: Removing unreachable block (ram,0x0045dcf4) */
/* WARNING: Removing unreachable block (ram,0x0045dcd6) */
/* WARNING: Removing unreachable block (ram,0x0045dc47) */

int * FUN_0045db40(int *param_1,int *param_2,char *param_3)

{
  char cVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *unaff_FS_OFFSET;
  float10 fVar10;
  double in_stack_0000002c;
  int in_stack_00000034;
  undefined4 *local_2c;
  undefined1 local_24 [24];
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar3 = param_2;
  puStack_8 = &LAB_0063f158;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  puVar4 = (undefined4 *)0x0;
  local_2c = (undefined4 *)0x0;
  local_4 = 0;
  do {
    if (param_1 == piVar3) {
      if (puVar4 == (undefined4 *)0x0) {
        *unaff_FS_OFFSET = local_c;
        return piVar3;
      }
      uVar7 = (*(int *)(in_stack_00000034 + 0xdc) + 1U) % 0x37;
      uVar8 = (*(int *)(in_stack_00000034 + 0xe0) + 1U) % 0x37;
      *(uint *)(in_stack_00000034 + 0xdc) = uVar7;
      *(uint *)(in_stack_00000034 + 0xe0) = uVar8;
      *(int *)(in_stack_00000034 + uVar7 * 4) =
           *(int *)(in_stack_00000034 + uVar7 * 4) - *(int *)(in_stack_00000034 + uVar8 * 4);
      piVar3 = *(int **)((*(uint *)(in_stack_00000034 + *(int *)(in_stack_00000034 + 0xdc) * 4) %
                         (uint)((int)puVar4 >> 2)) * 4);
      *unaff_FS_OFFSET = local_c;
      return piVar3;
    }
    puVar2 = (uint *)*param_1;
    if ((puVar2[3] & 0x10) == 0) {
      uVar7 = 0xffffffff;
      pcVar9 = param_3;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      iVar5 = _strncmp(param_3,(char *)(-(uint)(*puVar2 != puVar2[1]) & *puVar2),~uVar7 - 1);
      puVar4 = local_2c;
      if (iVar5 == 0) {
        uVar6 = FUN_0045be30(local_24,&stack0x00000014,puVar2 + 0xc);
        fVar10 = (float10)FUN_004577a0(uVar6);
        if ((float10)in_stack_0000002c <= fVar10) {
          if (local_2c == (undefined4 *)0x0) {
            FUN_00464200(0,&param_1);
          }
          else {
            if (local_2c != (undefined4 *)0x0) {
              *local_2c = param_1;
            }
            local_2c = local_2c + 1;
            puVar4 = local_2c;
          }
        }
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

