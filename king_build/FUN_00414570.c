
void FUN_00414570(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  piVar3 = DAT_0068be24;
  piVar5 = DAT_0068be20;
  if (DAT_0068be20 != DAT_0068be24) {
    do {
      piVar4 = DAT_0068be20;
      if (DAT_0068be20 != piVar3) {
        do {
          FUN_00404d70(&local_18,*piVar5);
          FUN_00404d70(&local_14,*piVar4);
          local_10 = 0;
          local_c = 0;
          if (((local_18 != local_14) && (local_18 != -1)) && (local_14 != -1)) {
            FUN_00487690(0,local_18,local_14,&local_10);
            FUN_004012c0(100);
          }
          iVar1 = *piVar5;
          puVar2 = *(undefined4 **)(iVar1 + 0x68);
          if (puVar2 == *(undefined4 **)(iVar1 + 0x6c)) {
            FUN_0044c410(puVar2,&local_10);
          }
          else {
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = local_10;
              puVar2[1] = local_c;
            }
            *(int *)(iVar1 + 0x68) = *(int *)(iVar1 + 0x68) + 8;
          }
          piVar4 = piVar4 + 1;
          piVar3 = DAT_0068be24;
        } while (piVar4 != DAT_0068be24);
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar3);
  }
  return;
}

