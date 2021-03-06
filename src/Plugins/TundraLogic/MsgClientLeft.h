#pragma once

#include "kNet/DataDeserializer.h"
#include "kNet/DataSerializer.h"

namespace Tundra
{

/// Network message informing that client has left the server.
struct MsgClientLeft
{
	MsgClientLeft()
	{
		InitToDefault();
	}

	MsgClientLeft(const char *data, size_t numBytes)
	{
		InitToDefault();
		kNet::DataDeserializer dd(data, numBytes);
		DeserializeFrom(dd);
	}

	void InitToDefault()
	{
		reliable = defaultReliable;
		inOrder = defaultInOrder;
		priority = defaultPriority;
	}

	enum { messageID = 103 };
	static inline const char * Name() { return "ClientLeft"; }

	static const bool defaultReliable = true;
	static const bool defaultInOrder = true;
	static const u32 defaultPriority = 100;

	bool reliable;
	bool inOrder;
	u32 priority;

	u32 userID;

	inline size_t Size() const
	{
		return (size_t)kNet::VLE8_16_32::GetEncodedBitLength(userID);
	}

	inline void SerializeTo(kNet::DataSerializer &dst) const
	{
		dst.AddVLE<kNet::VLE8_16_32>(userID);
	}

	inline void DeserializeFrom(kNet::DataDeserializer &src)
	{
		userID = src.ReadVLE<kNet::VLE8_16_32>();
	}
};

}
