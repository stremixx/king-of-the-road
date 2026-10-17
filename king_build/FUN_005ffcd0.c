
char * FUN_005ffcd0(int param_1)

{
  if (param_1 < -0x7788fed3) {
    if (param_1 == -0x7788fed4) {
      return s_DPERR_PLAYERLOST_00682ee4;
    }
    if (param_1 < -0x7788ff87) {
      if (param_1 == -0x7788ff88) {
        return s_DPERR_INVALIDFLAGS_0068301c;
      }
      if (param_1 < -0x7788ffeb) {
        if (param_1 == -0x7788ffec) {
          return s_DPERR_ACTIVEPLAYERS_006830d0;
        }
        if (param_1 < -0x7ff8fff1) {
          if (param_1 == -0x7ff8fff2) {
            return s_DPERR_OUTOFMEMORY_00683128;
          }
          if (param_1 < -0x7fffbffd) {
            if (param_1 == -0x7fffbffe) {
              return s_DPERR_NOINTERFACE_0068314c;
            }
            if (param_1 == -0x7ffffff6) {
              return s_DPERR_PENDING_00683160;
            }
            if (param_1 == -0x7fffbfff) {
              return s_DPERR_UNSUPPORTED_00683170;
            }
          }
          else if (param_1 == -0x7fffbffb) {
            return s_DPERR_GENERIC_0068313c;
          }
        }
        else {
          if (param_1 == -0x7ff8ffa9) {
            return s_DPERR_INVALIDPARAMS_006830e4;
          }
          if (param_1 == -0x7788fffb) {
            return s_DPERR_ALREADYINITIALIZED_006830f8;
          }
          if (param_1 == -0x7788fff6) {
            return s_DPERR_ACCESSDENIED_00683114;
          }
        }
      }
      else {
        switch(param_1) {
        case -0x7788ffe2:
          return s_DPERR_BUFFERTOOSMALL_006830b8;
        case -0x7788ffd8:
          return s_DPERR_CANTADDPLAYER_006830a4;
        case -0x7788ffce:
          return s_DPERR_CANTCREATEGROUP_0068308c;
        case -0x7788ffc4:
          return s_DPERR_CANTCREATEPLAYER_00683074;
        case -0x7788ffba:
          return s_DPERR_CANTCREATESESSION_0068305c;
        case -0x7788ffb0:
          return s_DPERR_CAPSNOTAVAILABLEYET_00683040;
        case -0x7788ffa6:
          return s_DPERR_EXCEPTION_00683030;
        }
      }
    }
    else {
      switch(param_1) {
      case -0x7788ff7e:
        return s_DPERR_INVALIDOBJECT_00683008;
      case -0x7788ff6a:
        return s_DPERR_INVALIDPLAYER_00682ff4;
      case -0x7788ff65:
        return s_DPERR_INVALIDGROUP_00682fe0;
      case -0x7788ff60:
        return s_DPERR_NOCAPS_00682fd0;
      case -0x7788ff56:
        return s_DPERR_NOCONNECTION_00682fbc;
      case -0x7788ff42:
        return s_DPERR_NOMESSAGES_00682fa8;
      case -0x7788ff38:
        return s_DPERR_NONAMESERVERFOUND_00682f90;
      case -0x7788ff2e:
        return s_DPERR_NOPLAYERS_00682f80;
      case -0x7788ff24:
        return s_DPERR_NOSESSIONS_00682f6c;
      case -0x7788ff1a:
        return s_DPERR_SENDTOOBIG_00682f58;
      case -0x7788ff10:
        return s_DPERR_TIMEOUT_00682f48;
      case -0x7788ff06:
        return s_DPERR_UNAVAILABLE_00682f34;
      case -0x7788fef2:
        return s_DPERR_BUSY_00682f28;
      case -0x7788fee8:
        return s_DPERR_USERCANCEL_00682f14;
      case -0x7788fede:
        return s_DPERR_CANNOTCREATESERVER_00682ef8;
      }
    }
  }
  else if (param_1 < -0x7788fbef) {
    if (param_1 == -0x7788fbf0) {
      return s_DPERR_NOSERVICEPROVIDER_00682d78;
    }
    if (param_1 < -0x7788fe79) {
      if (param_1 == -0x7788fe7a) {
        return s_DPERR_INVALIDPRIORITY_00682e20;
      }
      switch(param_1) {
      case -0x7788feca:
        return s_DPERR_SESSIONLOST_00682ed0;
      case -0x7788fec0:
        return s_DPERR_UNINITIALIZED_00682ebc;
      case -0x7788feb6:
        return s_DPERR_NONEWPLAYERS_00682ea8;
      case -0x7788feac:
        return s_DPERR_INVALIDPASSWORD_00682e90;
      case -0x7788fea2:
        return s_DPERR_CONNECTING_00682e7c;
      case -0x7788fe98:
        return s_DPERR_CONNECTIONLOST_00682e64;
      case -0x7788fe8e:
        return s_DPERR_UNKNOWNMESSAGE_00682e4c;
      case -0x7788fe84:
        return s_DPERR_CANCELFAILED_00682e38;
      }
    }
    else if (param_1 < -0x7788fc17) {
      if (param_1 == -0x7788fc18) {
        return s_DPERR_BUFFERTOOLARGE_00682dd4;
      }
      if (param_1 == -0x7788fe70) {
        return s_DPERR_NOTHANDLED_00682dec;
      }
      if (param_1 == -0x7788fe66) {
        return s_DPERR_CANCELLED_00682e00;
      }
      if (param_1 == -0x7788fe5c) {
        return s_DPERR_ABORTED_00682e10;
      }
    }
    else {
      if (param_1 == -0x7788fc0e) {
        return s_DPERR_CANTCREATEPROCESS_00682d90;
      }
      if (param_1 == -0x7788fc04) {
        return s_DPERR_APPNOTSTARTED_00682da8;
      }
      if (param_1 == -0x7788fbfa) {
        return s_DPERR_INVALIDINTERFACE_00682dbc;
      }
    }
  }
  else if (param_1 < -0x7788f81b) {
    if (param_1 == -0x7788f81c) {
      return s_DPERR_ENCRYPTIONFAILED_00682cb8;
    }
    if (param_1 < -0x7788fbbd) {
      if (param_1 == -0x7788fbbe) {
        return s_DPERR_ALREADYREGISTERED_00682d14;
      }
      if (param_1 == -0x7788fbe6) {
        return s_DPERR_UNKNOWNAPPLICATION_00682d2c;
      }
      if (param_1 == -0x7788fbd2) {
        return s_DPERR_NOTLOBBIED_00682d48;
      }
      if (param_1 == -0x7788fbc8) {
        return s_DPERR_SERVICEPROVIDERLOADED_00682d5c;
      }
    }
    else {
      if (param_1 == -0x7788fbb4) {
        return s_DPERR_NOTREGISTERED_00682cd0;
      }
      if (param_1 == -0x7788f830) {
        return s_DPERR_AUTHENTICATIONFAILED_00682ce4;
      }
      if (param_1 == -0x7788f826) {
        return s_DPERR_CANTLOADSSPI_00682d00;
      }
    }
  }
  else if (param_1 < -0x7788f7f3) {
    if (param_1 == -0x7788f7f4) {
      return s_DPERR_CANTLOADCAPI_00682c50;
    }
    if (param_1 == -0x7788f812) {
      return s_DPERR_SIGNFAILED_00682c64;
    }
    if (param_1 == -0x7788f808) {
      return s_DPERR_CANTLOADSECURITYPACKAGE_00682c78;
    }
    if (param_1 == -0x7788f7fe) {
      return s_DPERR_ENCRYPTIONNOTSUPPORTED_00682c98;
    }
  }
  else {
    if (param_1 == -0x7788f7ea) {
      return s_DPERR_NOTLOGGEDIN_00682c14;
    }
    if (param_1 == -0x7788f7e0) {
      return s_DPERR_LOGONDENIED_00682c28;
    }
    if (param_1 == 0) {
      return s_DP_OK_00682c3c;
    }
  }
  wsprintfA(&DAT_00722cdc,s__0x_08X__00682c44,param_1);
  return &DAT_00722cdc;
}

