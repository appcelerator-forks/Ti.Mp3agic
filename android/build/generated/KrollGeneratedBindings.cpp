/**
 * Axway Appcelerator Titanium Mobile
 * Copyright (c) 2017 by Axway. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 * Warning: This file is GENERATED, and should not be modified
 */
#include <unordered_map>
#include <KrollBindings.h>

#include "de.appwerft.mp3agic.Mp3agicModule.h"
#include "de.appwerft.mp3agic.Mp3fileProxy.h"
#include "de.appwerft.mp3agic.AlbumImageProxy.h"


namespace titanium {
	namespace bindings {

		struct BindEntry;
		
		struct Hash {
			// FNV-1a hashing algorithm
			// http://www.isthe.com/chongo/tech/comp/fnv/index.html#FNV-1a
			std::size_t operator()(const char* name) const {
				std::size_t length = strlen(name);
				std::size_t hash = 0x811C9DC5;
				for (std::size_t i = 0; i < length; ++i) {
					hash ^= name[i];
					hash += (hash << 24) + (hash << 8) + (hash << 7) + (hash << 4) + (hash << 1);
				}
				return hash;
			}
		};

		struct Compare {
			bool operator()(const char* a, const char* b) const {
				return !strcmp(a, b);
			}
		};

		class Mp3agicBindings {
			public:
				static BindEntry* lookupGeneratedInit(const char*, unsigned int);
		};

		BindEntry* Mp3agicBindings::lookupGeneratedInit(const char* name, unsigned int length) {
			static BindEntry binds[] = {
				{"de.appwerft.mp3agic.AlbumImageProxy", ::de::appwerft::mp3agic::mp3agic::AlbumImageProxy::bindProxy, ::de::appwerft::mp3agic::mp3agic::AlbumImageProxy::dispose},
				{"de.appwerft.mp3agic.Mp3fileProxy", ::de::appwerft::mp3agic::mp3agic::Mp3fileProxy::bindProxy, ::de::appwerft::mp3agic::mp3agic::Mp3fileProxy::dispose},
				{"de.appwerft.mp3agic.Mp3agicModule", ::de::appwerft::mp3agic::Mp3agicModule::bindProxy, ::de::appwerft::mp3agic::Mp3agicModule::dispose}
			};
			static std::unordered_map<const char*, BindEntry&, Hash, Compare> map = {
				{binds[0].name, binds[0]},
				{binds[1].name, binds[1]},
				{binds[2].name, binds[2]},
			};

			auto result = map.find(name);
			while (result != map.end()) {
				// fallback in case of very unlikely collision
				if (!strcmp(name, result->second.name)) {
					return &result->second;
				}
				result++;
			}
			return nullptr;
		}
	}
}