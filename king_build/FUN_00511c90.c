
/* WARNING: Removing unreachable block (ram,0x00511d15) */
/* WARNING: Removing unreachable block (ram,0x00511d45) */
/* WARNING: Removing unreachable block (ram,0x00511d5b) */
/* WARNING: Removing unreachable block (ram,0x00511db8) */

void FUN_00511c90(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*(int *)(DAT_006cdbcc + 0x524) != 0) {
    return;
  }
  piVar2 = (int *)FUN_0051b780();
  if (piVar2 == (int *)0x0) {
    FUN_005d2520();
  }
  iVar1 = *piVar2;
  uVar3 = FUN_0050b500(s_listofgames_006757d4);
  (**(code **)(iVar1 + 0x18))(piVar2,uVar3);
  (**(code **)(*piVar2 + 8))(piVar2);
  return;
}

