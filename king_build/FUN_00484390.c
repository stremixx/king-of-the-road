
void FUN_00484390(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_0068be64 - DAT_0068be60 >> 2;
  if (iVar1 != 0) {
    DAT_0068c820 = 0xffffffff;
    DAT_0068c824 = 0x7fefffff;
    puVar3 = &DAT_0068c820;
    puVar4 = &DAT_0068c828;
    for (uVar2 = iVar1 * 8 - 5U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  FUN_00484370();
  return;
}

