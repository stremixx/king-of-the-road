
undefined4 FUN_005c2210(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint local_4;
  
  local_4 = 0;
  if ((param_1 != 0) && (DAT_00701f10 != (code *)0x0)) {
    (*DAT_00701f10)(param_2,param_1,&local_4,DAT_00701f0c);
    if (local_4 < param_2) {
      bVar1 = (*(short *)(DAT_00701f08 + 0xe) != 8) - 1;
      puVar3 = (uint *)(param_1 + local_4);
      for (uVar2 = param_2 - local_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1)) & 0x80808080;
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = param_2 - local_4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(byte *)puVar3 = bVar1 & 0x80;
        puVar3 = (uint *)((int)puVar3 + 1);
      }
    }
    return 0;
  }
  return 0x80004005;
}

