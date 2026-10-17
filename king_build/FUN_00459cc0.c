
void __fastcall FUN_00459cc0(int *param_1)

{
  LONG LVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if ((param_1[4] != 0) && (*param_1 + 1 != 0)) {
    FUN_0044b440(param_1[4],*param_1 + 1);
  }
  puVar2 = (undefined4 *)param_1[5];
  LVar1 = InterlockedDecrement(puVar2 + 1);
  if (LVar1 != 0) goto switchD_00459d00_default;
  switch((char)puVar2[2]) {
  case '\0':
    if (puVar2[5] != puVar2[4]) {
      FUN_0045aa00();
    }
    FUN_0045a9e0(puVar2[5],*puVar2);
    FUN_0044b440(puVar2,0x18);
    goto switchD_00459d00_default;
  case '\x01':
    FUN_00459cc0();
    uVar4 = 0x1c;
    break;
  case '\x02':
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = puVar2 + -1;
    }
    FUN_00459f00();
    uVar4 = 0x28;
    break;
  case '\x03':
    FUN_0045aa00();
    if ((*(char *)(puVar2 + 6) != '\0') && ((undefined4 *)puVar2[5] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)puVar2[5])(1);
    }
    uVar4 = 0x1c;
    break;
  default:
    goto switchD_00459d00_default;
  }
  FUN_0044b440(puVar2,uVar4);
switchD_00459d00_default:
  piVar3 = (int *)param_1[6];
  LVar1 = InterlockedDecrement(piVar3 + 1);
  if (LVar1 == 0) {
    switch((char)piVar3[2]) {
    case '\0':
      if (piVar3[5] != piVar3[4]) {
        FUN_0045aa00();
      }
      FUN_0045a9e0(piVar3[5],*piVar3);
      FUN_0044b440(piVar3,0x18);
      return;
    case '\x01':
      FUN_00459cc0();
      FUN_0044b440(piVar3,0x1c);
      return;
    case '\x02':
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = piVar3 + -1;
      }
      FUN_00459f00();
      FUN_0044b440(piVar3,0x28);
      break;
    case '\x03':
      if ((piVar3[4] != 0) && (*piVar3 + 1 != 0)) {
        FUN_0044b440(piVar3[4],*piVar3 + 1);
      }
      if (((char)piVar3[6] != '\0') && ((undefined4 *)piVar3[5] != (undefined4 *)0x0)) {
        (*(code *)**(undefined4 **)piVar3[5])(1);
      }
      FUN_0044b440(piVar3,0x1c);
      return;
    }
  }
  return;
}

