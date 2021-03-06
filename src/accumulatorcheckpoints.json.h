// Copyright (c) 2018 The Securypto developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef Securypto_ACCUMULATORCHECKPOINTS_JSON_H
#define Securypto_ACCUMULATORCHECKPOINTS_JSON_H

#include <string>

std::string GetMainCheckpoints() {
    std::string strMainCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 30,\n"
            "    \"1\": \"0\",\n"
            "    \"5\": \"0\",\n"
            "    \"10\": \"0\",\n"
            "    \"50\": \"0\",\n"
            "    \"100\": \"0\",\n"
            "    \"500\": \"0\",\n"
            "    \"1000\": \"0\",\n"
            "    \"5000\": \"0\"\n"
            "  },\n"

            "  {\n"
            "    \"height\": 350,\n"
            "    \"1\": \"283f355e77a74751f6f4be7a57ad6e930818201d2067a28a9b9fb463215ffda4d09185032b76a91226f1b7f5ac95ca45c699c4ce01175746c3e0e49e164e8324562d30ec235d8ca746d1309628ded2d410b27ea8dc56a90fdace5ed79c07b3cbd67fb8756b2436e379759f68ff6b455eeb03ff3b980628fa52c24269713c33506bcec4f952553d1298f39bb1777f05aec3c706a3837089463f15eaa65106086f06129022656cf69fc3a7a96028bf31d4e357d695a1ae36272343d5fe64b9f683e5bf3ff279ef16cae1469bc65639b8a00ccce47f8be23a78e44fdbea53aa8fe5e288fe4c353c0e5082e4c396b6418dc2d0e35f42fbcdbb6f0ae1dadd6d8e9869\",\n"
            "    \"5\": \"c841b07de8d7f59e75e761a600566b41c37b674d473c6a6f089d0e3dc11433045ef7e60018bf344a7d0ef621d7867b9293e7d0588c6eeac9c33395c305a03704fdfd54dbdd6070cefaed5df3c8aac40aad90a1e396fd41bc8a3f2185263d2d5ab1fd99ca115dede847fe1a633772c777d149cc84901b5f5c306be13552ee5404713be89a497a24b50992c5e2cb2b2a4bdd1b770538eca1cd24751ff0e7444810cf2978dbf7caf28efcdc55d6ef8c4d09c51173ffe3ace7b2e04ed5d353bdda86d3cd05503db85bf6ff3ba3f8985a7516cbdf3eb58c5ddbb6c8d0d740e0e9b0bc6ae87d460eccce22d0269bd6183b8286819900efa4eb5866806e311892bdea0\",\n"
            "    \"10\": \"9cdf87393589fde9c4238b11fc107b04d44e2550eb8680996202a934c62e6353688bffd694d2ce2f2e6295a9bc1374be350f9f876491e199dfa8de00ea65cc574f21cf7469f7ff8a30e5094e9534b979e0fe81c025d166199f3d3f5066496d2f6e678c51f2e06fad538480eb09989ffef78c778cc5a11535722e6305880b576558265bfc24e35beaa5c16d56d78ee8e56f3997432ce638b4df88055b06db9414feb87b225d38e908251e9375dec84b4a75207db36249e7055e5af137c31cc68e2699f79cd8a71a46ad12492816b4adb22e4881bc20805bb710624ef784913c7ae4267a8c46ff7ed4bbf116247e4e2c621d7a78d69db496c8f728edb55c8df4a3\",\n"
            "    \"50\": \"1e6a403add95fa96ffd00697138738d724ca3a0673172d810babf664f0fac71b08ca88a0e593b94c7166a578c8137058c50809481e54ff3367ee36a6c54590d038f888a1151c466c657cfbc5821aca29ddd4d931f858c26c9d0e4996b1de40c726b11dc3c5d064d2518b941b5da9797274434427388c822ade7686ca97fa74f2361f75c67c60381277dd2844df91020ace07e4d88ca56271e21a81fdfdef36c4daf598867ad4d081d59e5427d372b91bb942908030ba46715a591d0ed49964d99dccfdd4b8d20f0a438b8d97d55503fcd420e3321fb5112d25e3bba3c98b42647e21239468bc422d0b1e27b839316ffae86b128f824a6fcdb767e028c4685b17\",\n"
            "    \"100\": \"22a1aedbd66f704d21d7a221ff2df52f655cd30a0c5c377dc3a2355620cd9adef470c1b8959388f26b163899ba327af7fb5fd105012779525132c5b8ad93e623ef5aa7fedda0e6c3bbbce4598511c2cef21b0fd074cc14332bed446d5316184a731d487ce7372fbc64e27f197242f99377ab3ec254f81ac342d38d5e4829727ce5ecafef7617ff7582648e211489b990136d4182466814cd4b140d8ae19f1eabd9eac0d3d2d1790745b37a8237bc03038eac1213a678796ca5b8855e7a995f2cf645286f4aa23ca2f85c7d990e70b3c357efa4498e729d1afc55c8a6ee7b00af2d0db15f1c033a310dfc48541f21e34b33b392f10df77f6b8f952068462e43eb\",\n"
            "    \"500\": \"61d4739680d17677b65e7298244319f92f01a2c919766a88465480da60f2bc0727989cecc6e7dde14e3ef330491021bb8503f07960ba26bcad63b98f6d2f3ecd1644cba6602bf3972504d026396e72f1fe5263364aafcc9586624968b78aa7d16f393dd4bed6722a8451ad611aea5d977dd768f753b0033b307b0d258ace78464348b5d4522fce3ae162184b7a31912b9cf55f850a49ed3fd086e9f200ca2087e4122fd8a523d45839b41da46749df330c55342686df7ce9fdde440a12a8515a7ba6423a35c926ebe1a4ba14d45ec30a7c13c0e9c5570cc0e1468eb194f0dc60ef7c2992863d4a4721f01edad6f8940847069d568fc2a4090fc2c9a19ab7769\",\n"
            "    \"1000\": \"968a6c1de50c76c9ea4651c82aa7ef777c93dabbb57fa71042be8fc74e1a6d97175a9f68bd6c04c414565e2346cbbe7aa5b6524d9a0b337e4ef1324d254100689c09465ac120a592e1f57101d92a31f61da8b741d41c04c8269c7611afb48c1b7a9327d9faff37a425857d8ea637201f939c05f2a4e2ea78ad3a5b8cb62e68df0ff840d0921f2c595b31efb3ae219f453827e6642a50081b76f2093161379b819a8e480c8b91c5287767ab4670b341457f254b65bc1e691d787ee6e0c41280d0bd2fd1e6b4ff76fc2df1818ea4ee69c77364b47b1cd183476d1e4e43d8748f69ad3a75c3b066fb7585f120b7423d6f99c53311a3228bb93f358e0c9ba4de65c3\",\n"
            "    \"5000\": \"4a5dc3758def5d872a7a4c34f341797eb433444c8bc0d92f6dbd38e8decff184c18f386c73d7c753b33a47a48b013600630bc19c6dfa98373679849fc386d16cbcd345bb9caed1a08c062272a91dd10a42ea9ada10d1760cda651cab96132656d77c675c4a48839e4a47de3372b3424a71ecd54b951d2b705ab8dd3e17a24c62983c629971c3c389232bc29731e24f5f7200241db8e46d678632fc6066f4f20873acaf9ae5cb04eae4213f6d6536d98d0451a5b48fb5664a28df708fc0d322df8f31d120fa20aaee1bbd0136e0c8863dd303cdeb24ce72516ab365f89eccba91845f824a379050170139c3ec02b02bfe27fb77ede06abde30c187aec159baf49\"\n"
            "  }\n"
            "]";
    return strMainCheckpoints;
}

std::string GetTestCheckpoints() {
    std::string strTestCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 0,\n"
            "    \"1\": \"0\",\n"
            "    \"5\": \"0\",\n"
            "    \"10\": \"0\",\n"
            "    \"50\": \"0\",\n"
            "    \"100\": \"0\",\n"
            "    \"500\": \"0\",\n"
            "    \"1000\": \"0\",\n"
            "    \"5000\": \"0\"\n"
            "  }\n"
            "]";
    return strTestCheckpoints;
}

std::string GetRegTestCheckpoints() {
    std::string strRegTestCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 0,\n"
            "    \"1\": \"0\",\n"
            "    \"5\": \"0\",\n"
            "    \"10\": \"0\",\n"
            "    \"50\": \"0\",\n"
            "    \"100\": \"0\",\n"
            "    \"500\": \"0\",\n"
            "    \"1000\": \"0\",\n"
            "    \"5000\": \"0\"\n"
            "  }\n"
            "]";
    return strRegTestCheckpoints;
}

#endif //Securypto_ACCUMULATORCHECKPOINTS_JSON_H
