
void FUN_0044b6e0(uint param_1)

{
  size_t _Size;
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  char *local_1c;
  undefined **local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar6 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e478;
  local_c = ExceptionList;
  if (0x80 < param_1) {
    ExceptionList = &local_c;
    pvVar3 = _malloc(param_1);
    while( true ) {
      if (pvVar3 != (void *)0x0) {
        ExceptionList = local_c;
        return;
      }
      if (DAT_0068c16c == (code *)0x0) break;
      (*DAT_0068c16c)();
      pvVar3 = _malloc(uVar6);
    }
    local_1c = s_bad_allocation_0066e484;
    FUN_0061d77d(&local_1c);
    local_18[0] = &PTR_FUN_0064a950;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_18,&DAT_00658d50);
  }
  uVar6 = param_1 + 7;
  ExceptionList = &local_c;
  FUN_00401aa0();
  local_4 = 0;
  piVar1 = *(int **)(&DAT_0068c120 + (uVar6 >> 3) * 4);
  if (piVar1 == (int *)0x0) {
    uVar6 = uVar6 & 0xfffffff8;
    uVar4 = DAT_0068c178 - (int)DAT_0068c174;
    param_1 = 0x14;
    puVar5 = DAT_0068c174;
    if (uVar4 < uVar6 * 0x14) {
      if (uVar4 < uVar6) {
        _Size = ((DAT_0068c170 >> 4) + 7 & 0xfffffff8) + uVar6 * 0x28;
        if (uVar4 != 0) {
          *DAT_0068c174 = *(undefined4 *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
          *(undefined4 **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = DAT_0068c174;
        }
        DAT_0068c174 = _malloc(_Size);
        uVar4 = uVar6;
        if (DAT_0068c174 == (undefined4 *)0x0) {
          for (; uVar4 < 0x81; uVar4 = uVar4 + 8) {
            puVar5 = *(undefined4 **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
            if (puVar5 != (undefined4 *)0x0) {
              *(undefined4 *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = *puVar5;
              DAT_0068c178 = (int)puVar5 + uVar4;
              DAT_0068c174 = puVar5;
              goto LAB_0044b888;
            }
          }
          DAT_0068c178 = 0;
          DAT_0068c174 = (undefined4 *)FUN_0044bc90(_Size);
        }
        DAT_0068c170 = DAT_0068c170 + _Size;
        DAT_0068c178 = (int)DAT_0068c174 + _Size;
LAB_0044b888:
        puVar5 = (undefined4 *)FUN_0045a160(uVar6,&param_1);
      }
      else {
        param_1 = uVar4 / uVar6;
        DAT_0068c174 = (undefined4 *)((int)DAT_0068c174 + param_1 * uVar6);
      }
      if (param_1 == 1) {
        DAT_0068c164 = 0;
        ExceptionList = local_c;
        return;
      }
    }
    else {
      DAT_0068c174 = DAT_0068c174 + uVar6 * 5;
    }
    puVar5 = (undefined4 *)((int)puVar5 + uVar6);
    *(undefined4 **)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4) = puVar5;
    iVar7 = 1;
    puVar2 = puVar5;
    if (param_1 != 2) {
      do {
        puVar5 = (undefined4 *)((int)puVar2 + uVar6);
        *puVar2 = puVar5;
        iVar7 = iVar7 + 1;
        puVar2 = puVar5;
      } while (param_1 - 1 != iVar7);
    }
    *puVar5 = 0;
  }
  else {
    *(int *)(&DAT_0068c120 + (uVar6 >> 3) * 4) = *piVar1;
  }
  DAT_0068c164 = 0;
  ExceptionList = local_c;
  return;
}

