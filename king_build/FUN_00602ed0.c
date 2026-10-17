
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __fastcall FUN_00602ed0(int *param_1)

{
  int iVar1;
  undefined1 **ppuVar2;
  int *piVar3;
  int *piStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined4 local_14 [5];
  
  puStack_1c = (undefined1 *)local_14;
  if (*param_1 == 3) {
    piStack_24 = (int *)param_1[3];
    if (piStack_24 == (int *)0x0) {
      return 3;
    }
    local_14[0] = 0;
    iStack_20 = 0;
    iVar1 = (**(code **)(*piStack_24 + 0x28))();
    if (iVar1 < 0) {
      return 0;
    }
    if (iStack_20 == 0) {
      *param_1 = 1;
    }
    else if (iStack_20 == 1) {
      *param_1 = 2;
    }
    iVar1 = (*(code *)**(undefined4 **)param_1[2])((undefined4 *)param_1[2],&DAT_006544a0);
    if (-1 < iVar1) {
      piVar3 = &iStack_20;
      ppuVar2 = &puStack_1c;
      iVar1 = (**(code **)(puStack_1c + 0x20))(&puStack_1c,&piStack_24,ppuVar2,piVar3,0);
      if ((-1 < iVar1) &&
         (((piVar3 == (int *)0x1 || (piVar3 == (int *)0x2)) || (piVar3 == (int *)0x3)))) {
        FUN_006030c0();
      }
      (**(code **)(*ppuVar2 + 8))(ppuVar2);
    }
  }
  return *param_1;
}

