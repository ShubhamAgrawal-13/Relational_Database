#include"global.h"

bool semanticParse(){
    logger.log("semanticParse");
    switch(parsedQuery.queryType){
        case CLEAR: return semanticParseCLEAR();
        case CROSS: return semanticParseCROSS();
        case DISTINCT: return semanticParseDISTINCT();
        case EXPORT: return semanticParseEXPORT();
        case INDEX: return semanticParseINDEX();
        case JOIN: return semanticParseJOIN();
        case LIST: return semanticParseLIST();
        case LOAD: return semanticParseLOAD();
        case PRINT: return semanticParsePRINT();
        case PROJECTION: return semanticParsePROJECTION();
        case RENAME: return semanticParseRENAME();
        case SELECTION: return semanticParseSELECTION();
        case SORT: return semanticParseSORT();
        case SOURCE: return semanticParseSOURCE();
        case LOAD_MATRIX: return semanticParseLOAD_MATRIX();
        case TRANSPOSE: return semanticParseTRANSPOSE();
        case INSERT: return semanticParseINSERT();
        case DELETE: return semanticParseDELETE();
        case BULK_INSERT: return semanticParseBULKINSERT();
        case GROUP_BY: return semanticParseGROUPBY();
        case ALTER: return semanticParseALTER();
        default: cout<<"SEMANTIC ERROR"<<endl;
    }

    return false;
}