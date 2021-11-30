#pragma once

#include <effectengine/Animation_MoodBlobs.h>

#define ANIM_WARM_MOOD_BLOBS "Warm mood blobs"

class Animation_WarmMoodBlobs : public Animation_MoodBlobs
{
	Q_OBJECT

private:

	static QJsonObject GetArgs();

public:

	Animation_WarmMoodBlobs(QString name = ANIM_WARM_MOOD_BLOBS);

	static EffectDefinition getDefinition();
};
