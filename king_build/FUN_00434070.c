
void FUN_00434070(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  piVar7 = DAT_0068be20;
  if (DAT_0068be20 != DAT_0068be24) {
    do {
      iVar1 = *piVar7;
      iVar6 = 0;
      uVar2 = *(undefined4 *)(iVar1 + 0x18);
      piVar3 = *(int **)(iVar1 + 0x1c);
      if (piVar3 != *(int **)(iVar1 + 0x20)) {
        do {
          if (*piVar3 != -1) {
            *(int *)(*(int *)(DAT_0068be60 + *piVar3 * 4) + 0xa8) =
                 (int)piVar7 - (int)DAT_0068be20 >> 2;
            if ((piVar3[1] & 1U) == 0) {
              if ((piVar3[1] & 8U) == 0) {
                iVar4 = *(int *)(DAT_0068be60 + *piVar3 * 4);
                uVar5 = *(uint *)(iVar4 + 0xc) | 1;
                goto LAB_004340f6;
              }
            }
            else {
              iVar4 = *(int *)(DAT_0068be60 + *piVar3 * 4);
              uVar5 = *(uint *)(iVar4 + 0xc) | 2;
LAB_004340f6:
              *(uint *)(iVar4 + 0xc) = uVar5;
            }
            *(int *)(*(int *)(DAT_0068be60 + *piVar3 * 4) + 0xb4) = iVar6;
            *(undefined4 *)(*(int *)(DAT_0068be60 + *piVar3 * 4) + 0xb0) = uVar2;
          }
          piVar3 = piVar3 + 4;
          iVar6 = iVar6 + 1;
        } while (piVar3 != *(int **)(iVar1 + 0x20));
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != DAT_0068be24);
  }
  return;
}

